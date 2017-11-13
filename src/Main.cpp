#include <iostream>
#include <chrono>
#include <thread>

#include "Order.h"
#include "OrderAttr.h"
#include "OrderManage.h"

int main()
{
    OrderManage rua;
    std::thread order(orderHandle);
    order.join();
    return 0;
}
