using MassTransit;
using MassTransit.RabbitMqTransport;
using System;
using System.Collections.Generic;
using System.Text;

namespace rabbit_mq_message
{
       public class RabbitMqBus
    {    
        public static IBusControl ConfigureBus(IServiceProvider provider, Action<IRabbitMqBusFactoryConfigurator, IRabbitMqHost>
         registrationAction = null)
        {
            return Bus.Factory.CreateUsingRabbitMq(cfg =>
            { 
                   var host = new cfg.Host(new Uri(BusConstants.RabbitMqUri), hst =>
                {
                    hst.Username(BusConstants.UserName);
                    hst.Password(BusConstants.Password);
                });
                
                cfg.ConfigureEndpoints((IBusRegistrationContext)provider);

                registrationAction?.Invoke(cfg, host);
            });
        }
    }
}