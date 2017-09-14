#include <stdio.h>
#include <boost/asio.hpp>
int main()
{
    printf("Hello Boost!\n");
    
    return 0;
}
//g++ a.cpp  -I /usr/local/include -L /usr/local/lib -l boost_system -l boost_thread
