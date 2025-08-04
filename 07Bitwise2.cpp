#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your number : ";
    cin>>a;
    
    //left shift right shift operators they first convert in 0 and 1 then shift 
    
    cout<<(a<<3)<<endl; // << is used for multipling 2 as many times as the no is written 
    cout<<(a>>3);       // >> is used for divide by 2 
    return 0;
}