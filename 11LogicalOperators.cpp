#include<iostream>
using namespace std;
int main (){
    int a,b,c,d;
    cout<<"Enter 1st no : "<<endl;
    cin>>a;
    cout<<"Enter 2nd no : "<<endl;
    cin>>b;
    cout<<"Enter 3rd no : "<<endl;
    cin>>c;
    cout<<"Enter 4th no : "<<endl;
    cin>>d;

    cout<<"(a>b)or(c>d) : "<<(a>b)||(c>d); //0 for false and 1 for true 
    return 0;
}