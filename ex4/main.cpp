#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double xa,xb,ya,yb;
    cout << "Donner Xa" << endl;
    cin>>xa;
    cout << "Donner Ya" << endl;
    cin>>ya;
    cout << "Donner Xb" << endl;
    cin>>xb;
    cout << "Donner Yb" << endl;
    cin>>yb;
    cout<<"La distance AB est egale à"<<sqrt(pow((xa-xb),2)+pow((ya-yb),2))<<endl;
    return 0;
}
