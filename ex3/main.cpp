#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout<<"Donner le nombre de mots: ";
    cin>>n;
    string tab[n],longest;
    cout<< "Veuillez taper "<<n<<" mots" << endl;
    cout<<"Mot num 1:";
    cin>>tab[0];
    longest=tab[0];
    for(int i=1;i<n;i++){
        cout<<"Mot num"<<i+1<<": ";
        cin>>tab[i];
        if(tab[i].length()>longest.length()){
            longest=tab[i];
        }
    }
    cout<<"Le mot le plus long est:"<<longest<<endl;
    return 0;
}
