#include <iostream>
#define Player

class getDotPlayerInput
{
    private:
        std::string dot = ".";
    public:
        void MoveCharacterMesh(int x)
        {
            
            for(int i = 0; i <= x; i++)
            {
                
                std::to_string(i) += dot;
                std::cout<< i << std::endl;
                
            }
            
        }
};

/*just a fuckin shit of dumb ass code, and i have no idea how to implement linear algebra in any programming language, which proves that learning maths for computer....is not just enough practicing in a copy */