#include <iostream>
#include <vector>
#include <math.h>

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
            if(sum == "add"){
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
    void calculate_distancemesh(float axis_of_x, float axis_of_y)
    {
        float calculate_d = axis_of_x*axis_of_x;
        float calculate_d_2 = axis_of_y*axis_of_y;
        float add = calculate_d + calculate_d_2;
        float meth = sqrt(add);
        std::cout<<meth << " units"<<std::endl;
    }

    void calculate_derivate(float u, float v,std::string sum)
    {
        if(sum == "addrule")
        {
            float powers;
            std::cin >> powers;
            if(powers > 1)
            {
                float dx;
                std::cin>>dx;
                if(dx == 1)
                {
                    float formula = powers - 1;
                    float lolmn = powers*u*formula*formula;
                   std::cout<< lolmn << "x " << "+ "<<v<<std::endl;
                }
                else if(dx == 2)
                {
                    float formula = powers -1;
                    float lol = powers*v*formula*formula;
                    std::cout<< u << "x "<< "+ "<<lol<<std::endl;
                }
            }
        }
        else if(sum == "add -rule-add~")
        {
            float powers;
            std::cin>>powers;
            if(powers > 1 && powers <= 2)
            {
                float dx;
                std::cin>>dx;
                if(dx == 1)
                {
                    // u.d/dx.v + v.d/dx.u
                    float f_ = u*v;
                    float f_1 = v*u;
                    float ans = f_ + f_1;
                    std::cout << ans << "x " << "+ "<<v<<std::endl;
                }
            }
            
        }
    }
};


run_code
{
    program *pg = new program();
    pg->calculate_derivate(2,5,"addrule");
}


