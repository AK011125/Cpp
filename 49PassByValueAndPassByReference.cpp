#include<iostream>
using namespace std;
int main(){
    int a = 45;
    int &b = a; //both a and b have same memory locations bcz of ampercent operator 
    cout<<a<<endl;
    b++;
    cout<<b<<endl;
    cout<<a;
    return 0;
}