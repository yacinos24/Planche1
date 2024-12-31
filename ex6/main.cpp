#include <iostream>
using std::cin;
using std::cout;


/*Dans ce mode, la fonction prend des copies des variables d'origine a et b comme arguments.
Cela signifie que la fonction ne peut pas modifier les variables d'origine.*/
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

/*Dans ce mode, la fonction prend des pointeurs vers les variables d'origine a et b en tant qu'arguments.
 Cela permet à la fonction de modifier les variables d'origine.*/
void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*Dans ce mode, la fonction prend des références aux variables d'origine a et b comme arguments.
Cela permet à la fonction de modifier les variables d'origine.*/
void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a,b,A,B;
    cout<<"a=";
    cin>>A;
    cout<<"b=";
    cin>>B;
    a=A;
    b=B;
    cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swapValue(a, b);
    cout << "After swapValue: a = " << a << ", b = " << b << std::endl;
    a=A;
    b=B;
    swapPointer(&a,&b);
    cout << "After swapPointer: a = " << a << ", b = " << b << std::endl;
    a=A;
    b=B;
    swapReference(a, b);
    cout << "After swapReference: a = " << a << ", b = " << b << std::endl;
    return 0;
}
