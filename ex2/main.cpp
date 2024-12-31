#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::min;
int main()
{
    int x,minn;
    cout<< "Veuillez taper 10 entier" << endl;
    cout<<"X1=";
    cin>>minn;
    for (int i=2;i<=10;i++){
    cout<<"X"<<i<<"=";
    cin>>x;
        if (x<minn)
            minn=x;
    }
    cout<< "Le minimum est" <<minn<< endl;
return 0;
}
