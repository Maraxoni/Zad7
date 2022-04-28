#include <bits/stdc++.h>
#include "punkt.cpp"
using namespace std;
using namespace punkt;
namespace linia
{

    class Linia
    {

    public:
         final Punkt pkt1 , pkt2;
    public:
    
        Linia()
        {
            this->pkt1 = Punkt(0, 0);
            this->pkt2 = Punkt(1, 1);
        }

    
        Linia(Punkt p1, Punkt p2)
        {
            this->pkt1 = p1;
            this->pkt2 = p2;
            cout << "!@#" << pkt1.toString() << "!@#" << endl;
        }

    
        Linia(const Linia &u)
        {
            Linia(u.pkt1, u.pkt2);
        }

    
        void przesun(int dx, int dy)
        {
            pkt1.przesun(dx, dy);
            pkt2.przesun(dx, dy);
        }

    
        string toString()
        {
            string napis2;
            napis2 = pkt1.toString();
            napis2 = napis2 + " i ";
            napis2 = napis2 + pkt2.toString();
            return napis2;
        }
    };
};
