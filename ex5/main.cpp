#include <iostream>
#include <cmath>
using namespace std;
double f(double x,bool ok){
    double y;
    y=(x-1)*(2-x);
    if (y>=0){
        return sqrt(y);
    }
    else{
        ok=false;
        return y = 0.0;
    }
}
int main()
{
    double x,result;
    bool ok=true;
    cout << "X=";
    cin>>x;
    result = f(x,ok);
    if (ok) {
        std::cout << "The result is: " << result << std::endl;
    } else {
        std::cout << "The function is not defined at x = " << x << std::endl;
    }
    return 0;
}
