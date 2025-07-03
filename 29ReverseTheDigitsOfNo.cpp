#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;
    int New =0;

    while (n>0){
        New = (New*10) + n%10;
        n=n/10;
    }
    cout<<New;
    return 0;
}