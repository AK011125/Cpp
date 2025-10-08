#include<iostream>
using namespace std;
int main(){
    int a = 45;
    int &b = a; //both a and b have same memory locations bcz of ampercent operator 
    cout<<a<<endl;
    b++;
    cout<<b<<endl;       // 46 bcz we add 1
    cout<<a<<endl;       // 46 automatically add 1 bcz we add 1 in b
    a++;
    cout<<a<<endl;       // 47 bcz we add 1
    cout<<b;             // 47 automatically add 1 bcz we add 1 in a
    return 0;
}