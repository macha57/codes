#include <iostream>
class pointer_fetch
{
    public:
        void pointer_getch(float a)
        {
            float *ptr = &a;
            std::cout<< "[ADDRESSING PTR REF OF] " << *ptr << " ->() "<< ptr << std::endl;
            
        }
};

class set 
{
    private:
        float n_u;
        float dat_1;
        float dat_2;
        float intersection;
        float compliment;
    public:
        void get_set_data(float u,float numType_n0A, float numType_n0B, float n, float comP,std::string cmd)
        {
            n_u = u;
            dat_1 = numType_n0A;
            dat_2 = numType_n0B;
            intersection = n;
            compliment = comP;
            if(cmd == "!u")
            {
                if(comP == 0)
                {
                    float formula = dat_1 + dat_2 - intersection;
                    std::cout << "Total number of data: " << formula << std::endl; 
                }
                else{
                    std::cerr<< "[ERROR]....[].....00000010001111000110101010101010101010000011110101010/bin/00002";
                }
            }

            else if(cmd == "!inter")
            {
                if(comP == 0)
                {
                    if(u > 0)
                    {
                        float formula = dat_1 + dat_2 - n_u;
                        if(formula < 0)
                        {
                            std::cerr<< "Invalid operation" << std::endl;

                        }else if(formula >= 1)
                        {
                            std::cout<< "Data of intersection n > "<< formula << std::endl;
                            std::cout<<"Type '$->' for notation enum type only: "<<std::endl;
                            std::string command_3;
                            std::cin>>command_3;
                            if(command_3 == "$->")
                            {
                                float a = dat_1 - formula;
                                float b = dat_2 - formula;
                                if(a < 0 || b < 0)
                                {
                                    std::cerr << "WARNING[ one of the set is in negative num type ]...run anyway ;; y ;; n"<<std::endl;
                                    std::string command_2;
                                    std::cin>>command_2;
                                    if(command_2 == "y")
                                    {
                                        std::cout << "nO(a) = " << a << "\n" << "nO(b) = " << b << std::endl;
                                    }else if(command_2 == "n")
                                    {
                                        std::cerr << "try again" << std::endl;
                                    }
                                    
                                }
                                else
                                {
                                    std::cout << "nO(a) = " << a << "\n" << "nO(b) = " << b << std::endl;
                                }
                                
                            }else 
                            {
                                std::cerr << "[ERROR] SOMETHING WENT WRONG "<< std::endl;
                            }
                        }
                    }
                }
            
                else if(comP > 0)
                {
                    if(u > 0)
                    {
                        float formula = dat_1 + dat_2 + comP - u;
                        if(formula < 0)
                        {
                            std::cerr << "Invalid operation"<< std::endl;

                        }else if(formula >= 1)
                        {
                            std::cout<< "Data of intersection "<<formula<<std::endl;
                            std::cout << "Type '$->' for notation enum type only : "<<std::endl;
                            std::string command;
                            std::cin>>command;
                            if(command == "$->")
                            {
                                float on = dat_1 - formula;
                                float on_2 = dat_2 - formula;
                                if(on < 0 || on_2 < 0)
                                {
                                    std::cerr << "WARNING[ one of the set is in negative num type ]...run anyway ;; y ;; n"<<std::endl;
                                    std::string command_2;
                                    std::cin>>command_2;
                                    if(command_2 == "y")
                                    {   
                                        std::cout << "nO(a) = " << on << "\n" << "nO(b) = " << on_2<< std::endl;
                                    }else if(command_2 == "n")
                                    {
                                        std::cerr << "try again" << std::endl;
                                    }
                                    
                                }
                                else
                                {
                                    std::cout << "nO(a) = " << on << "\n" << "nO(b) = " << on_2<< std::endl;
                                }
                                
                            }else 
                            {
                                std::cerr << "[ERROR] SOMETHING WENT WRONG "<< std::endl;
                            }
                        }
                    }
                }
            }
            
            else if(cmd == "n0A")
            {
                
            }
            else
            {
                std::cerr << "[EXE [ERROR]]---------------->(FORBIDDEN)------111110101010 ~()";
            }
        }
};
class probablity
{
public:
    void find_def_probablity()
    {
        float a[] = {2,0,0,9,9,0,9,0,3,5};
        float count = sizeof(a)/sizeof(float);
        std::cout<< count<<std::endl;
    }
};
int main(int args, char* argv[])
{
    set *get_set_ = new set;
    probablity *prob = new probablity;
    std::string ntml;
    while(1)
    {
        std::cout<<"Bash?/machaRoot/> ";
        std::cin>>ntml;
        if(ntml == "$prob")
        {
            prob->find_def_probablity();

        }else if(ntml == "set$")
        {
            break;
        }
    }

    std::string input_type;
    std::string m;
    while(1)
    {
        std::cin>>m;
        if(m == "get_hc")
        {
            std::cout<< "[PARAM --- (6) --- FLOAT(5) --- STRING(1) --- TYPE --- STRING]:  ";
            std::cin >> input_type;
            float a_numType;
            float b_numType;
            float c_numType;
            float d_numType;
            float e_numType;
            std::cout << "n(u) -> ";
            std::cin>>a_numType;
            std::cout<< "n(a) -> ";
            std::cin>>b_numType;
            std::cout<<"n(b) -> ";
            std::cin>>c_numType;
            std::cout<<"n(A ⋂ B) -> ";
            std::cin>>d_numType;
            std::cout<< "n(A u B ^)";
            std::cin>>e_numType;

            get_set_->get_set_data(a_numType,b_numType,c_numType,d_numType,e_numType,input_type);
        
        }else if(m == "exit")
        {
            break;
        }else
        {
            continue;
        }
    }
    delete get_set_;
    
}
