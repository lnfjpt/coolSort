#include <iostream>
#include <chrono>
#include <thread>

#include "Order.h"
#include "OrderAttr.h"

void fun()
{
    std::cout << "A new thread!" << std::endl;
}

int main()
{
    std::thread t(fun);
    t.join();
    std::cout<<"Main thread";
    return 0;
}
