#include<iostream>
using namespace std;
void sum(int x, int y){
    int ans = x+y;
    cout<<"Sum of the numbers is : "<<ans;      //Here return statement will not be return 
}

int main (){
    int a,b;
    cout<<"Enter 1st no : ";
    cin>>a;
    cout<<"Enter 2nd no : ";
    cin>>b;
    sum(a,b);

    return 0;
}