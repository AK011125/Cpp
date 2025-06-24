#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st no : "<<endl;
    cin>>a;
    cout<<"Enter 2nd no : "<<endl;
    cin>>b;
    cout<<"Enter 3rd no : "<<endl;
    cin>>c;

    if (a>b && b>c){
        cout<<("largest no is : ")<<a;
    }
    else if(b>a && a>c){
        cout<<("largest no is : ")<<b;
    }
    else{
        cout<<("largest no is : ")<<c;
    }
    return 0;
}