#include<iostream>
using namespace std;
int main (){
    int n;
    int digit =0;
    cout<<"Enter the number : ";
    cin>>n;

    
    while (n > 0){
            n = n/10;
            digit++;
        }
    cout<<digit;
    
    return 0;
}