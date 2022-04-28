#include <bits/stdc++.h>
using namespace std;
namespace punkt
{

    class Punkt

    {
    public:  int x, y;

    
        Punkt()
        {
            this->x = 0;
            this->y = 0;
        }

    
        Punkt(int a, int b)
        {
            this->x = a;
            this->y = b;
        }

    
        Punkt(const Punkt &u)
        {
        	Punkt(u.x,u.y);
        }

    
        void przesun(int a, int b)
        {
            this->x = this->x + a;
            this->x = this->x + b;
        }


        string toString()
        {
            string napis;
            napis = "[";
            napis = napis + (char)(this->x+48);
            napis = napis + ",";
            napis = napis + (char)(this->y+48);
            napis = napis + "]";
            return napis;
        }
    };
};
