#ifndef ORDER_MANAGE_H
#define ORDER_MANAGE_H
#include <iostream>
#include <chrono>
#include <thread>
#include <queue>

#include "Order.h"
#include "OrderAttr.h"

void orderHandle();

class OrderManage
{
    public:
        OrderManage()
        {
            return;
        }

    private:
        int totalOrder;
        //queue<Order> orderBuffer;

};

#endif
