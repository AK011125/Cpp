#include<iostream>
using namespace std;
int main (){
    int a,b,temp;
    cout<<"Enter 1st no : ";
    cin>>a;
    cout<<"Enter 2nd no : ";
    cin>>b;
    temp = a;
    a=b;
    b=temp;
    cout<<"Now 1st no is : "<<a<<endl;
    cout<<"Now 2nd no is : "<<b;
    return 0;
}