using MassTransit;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Order_ms.Infra;
using Order_ms.View_model;
using RabbitMq_Ifat;
using rabbitMq_message_ifat;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Order_ms.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class OrderController : ControllerBase
    {
        private readonly ISendEndpointProvider _sendEndpointProvider;
        private readonly IOrderDataAccess _orderDataAccess;


        public OrderController(
          ISendEndpointProvider sendEndpointProvider, IOrderDataAccess orderDataAccess)
        {
            _sendEndpointProvider = sendEndpointProvider;
            _orderDataAccess = orderDataAccess;
        }
        [HttpPost]
        [Route("createorder")]
        public async Task<IActionResult> CreateOrder([FromBody] OrderModel orderModel)
        {
            // Before sending data to microservices
            //the data is saved in the database

            _orderDataAccess.SaveOrder(orderModel);

            var endPoint = await _sendEndpointProvider.
                GetSendEndpoint(new Uri("queue:" + BusConstants.OrderQueue));

            await endPoint.Send<IOrderMessage>(new
            {
                OrderId = orderModel.OrderId,
                ProductName = orderModel.ProductName,
                PaymentCardNumber = orderModel.CardNumber
            });

            return Ok("Success");
        }

        [HttpGet]
        [Route("getall")]
        public async Task<IActionResult> GetAll()
        {
            try
            {
                return Ok(_orderDataAccess.GetAllOrder());
            }
            catch(Exception ex)
            {
                return null;
            }
           
        }
    }
}
 