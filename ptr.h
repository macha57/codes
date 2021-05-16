#pragma once

#include <iostream>
#include <cstring>

#define RUN_CD int main()
#define DEBUG 1
#if DEBUG
    #define GET(x) std::cout<< x << std::endl;
   
#else
    #define GET(x);
#endif

class ptr
{
    public:
        void getCharBytes()
        {
            char *a = new char[8];
            memset(a, 0, 8);
            GET(a);
            delete[] a;
        }
};

ptr pointer;
ptr *point_to = &pointer;