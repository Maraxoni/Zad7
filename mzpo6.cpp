#include <bits/stdc++.h>

#include "czworokat.cpp"
using namespace std;
using namespace punkt;
using namespace linia;

using namespace czworokat;
int main()
{
    int n;
    cout << "Podaj liczbe obiektow: ";
    cin >> n;
    Punkt p1(2, 5);
    Punkt p2(4, 7);
    Punkt p3(2, 1);
    Punkt p4(3, 7);

    Linia l1(p1,p2);
    Linia l2(p2,p3);
    Linia l3(p3,p4);
    Linia l4(p4,p1);
    Czworokat c1(l1,l2,l3,l4);
    cout <<" P1: "<< p1.toString() <<" P2: "<<p2.toString()<<" P3: "<<p3.toString()<<" P4: "<<p4.toString()<<endl;
    cout <<" L1: "<< l1.toString() <<" L2: "<< l2.toString()<<" L3: "<< l3.toString()<<" L4: "<<l4.toString()<<endl;
    cout <<" C1: "<< c1.toString()<<endl;
    return 0;
}
