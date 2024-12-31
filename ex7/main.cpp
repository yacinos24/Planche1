#include <iostream>





using namespace std;
int fact(int x){
    if (x==1)
        return x;
    else
        return x*fact(x-1);
}
int main()
{
    int x;
    cout << "Donner un entier x" << endl;
    cin>>x;
    int f=fact(x);
    cout<<x<<"!="<<f;
    return 0;
}


