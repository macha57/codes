#include <iostream>
#include <vector>


#define run_code int main()
void main_shit(int a)
{
int *ptr = &a;
std::cout<<"Address of the int: "<<ptr<<std::endl;
}

class program{
public:
void limit(float x_appr,float data_1,float data_2)
{
float append = x_appr;
float *eq = &data_1;
float *eq_2 = &data_2;
float q_x;
std::cin>>q_x;
std::string sum;
std::cin>>sum;
if(q_x == 1)
{
if(sum == "add")
float lol = data_1 * x_appr + data_2;
std::cout<< lol <<std::endl;
} 
else if(sum == "sub")
{
float lol_2 = data_1 * x_appr + data_2;
std::cout<< lol_2 << std::endl;
}
}
else if(q_x == 2)
{
if(sum == "add")
{
float ams = data_1 + data_2*x_appr;
std::cout<< ams << std::endl;
}
else if(sum=="sub")
{
float ams_2 = data_1 - data_2*x_appr;
std::cout<< ams_2 <<std::endl;
}
}
}
};


run_code
{
program *pg = new program();
pg->limit(2,3,2);
}







