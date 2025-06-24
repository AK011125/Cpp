#include<iostream>
using namespace std;
int main (){
    int a,b;
    char c;
    cout<<"Enter a no : ";
    cin>>a;
    cout<<"Enter a no : ";
    cin>>b;
    cout<<"Enter operator (+,-,*,/,%): ";
    cin>>c;

    switch(c){
        case '+' :
            cout<<"Sum is : "<<a+b<<endl;
            break;
        case '-' :
            cout<<"Difference is : "<<a-b<<endl;
            break;
        case '*' :
            cout<<"Multiplication is : "<<a*b<<endl;
            break;
        case '/' :
            cout<<"division is : "<<a/b<<endl;
            break;
        case '%' :
            cout<<"Remender is : "<<a%b<<endl;
            break;
        default :
            cout<<"Wrong operant entered !!!!!!! ";
    }

    return 0;
}