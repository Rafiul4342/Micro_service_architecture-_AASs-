using Order_ms.View_model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Order_ms.Infra
{
    public interface IOrderDataAccess
    {
        List<OrderModel> GetAllOrder();

        void SaveOrder(OrderModel order);
    }
}
