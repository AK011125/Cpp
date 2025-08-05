#include<iostream>
using namespace std;
int a = 55;
int main(){
    int b = 33;
    cout<<a<<endl;
    cout<<b<<endl;
    int a = 88;
    cout<<a<<endl;
    // Now if i want to acess my global variable so use scope resolution function 
    cout<<::a; // :: is scope resoltion operator

    return 0;
}