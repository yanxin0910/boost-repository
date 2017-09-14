#include <stdio.h>
#include <iostream>
#include <boost/asio.hpp>
int main()
{
    printf("Hello Boost!\n");
    std::cout << "Hello World\n";
    int a;
    return 0;
}
//g++ a.cpp  -I /usr/local/include -L /usr/local/lib -l boost_system -l boost_thread
