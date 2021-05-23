using Order_ms.View_model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Order_ms.Infra
{
    public class OrderDataAccess : IOrderDataAccess
    {
        public List<OrderModel> GetAllOrder()
        {
            using (var context = new OrderDbContext())
            {
                return context.OrderData.ToList();
            }
        }
        public void SaveOrder(OrderModel order)
        {
            using (var context = new OrderDbContext())
            {
                context.Add<OrderModel>(order);
                context.SaveChanges();
            }
        }
    }
}
