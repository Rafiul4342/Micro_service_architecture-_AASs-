using Microsoft.EntityFrameworkCore;
using Order_ms.View_model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Order_ms.Infra
{
    public class OrderDbContext : DbContext
    {
        public DbSet<OrderModel> OrderData { get; set; }

        public OrderDbContext()
        {
        }

        public OrderDbContext(DbContextOptions
<OrderDbContext> options) : base(options)
        {
        }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.UseSqlServer(@"Server=(localdb)\MSSQLLocalDB; initial catalog=OrderDb;integrated security=true;");
        }
    }
}
