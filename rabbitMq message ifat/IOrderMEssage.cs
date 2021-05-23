using System;
using System.Collections.Generic;
using System.Text;

namespace rabbitMq_message_ifat
{
    class IOrderMEssage
    {
        public Guid OrderId { get; set; }
        public string PaymentCardNumber { get; set; }
        public string ProductName { get; set; }
    }
}
