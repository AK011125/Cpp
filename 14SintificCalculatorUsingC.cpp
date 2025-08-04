#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a;
    cout<<"Enter a number : ";
    cin>>a;
    char b;
    cout<<"Enter the function (sqrt->s , ceiling->c , floor->f) : ";
    cin>>b;
    
    switch(b){
        case 's' : 
            cout<<sqrt(a);
            break;
        case 'c' : 
            cout<<ceil(a);
            break;
        case 'f' : 
            cout<<floor(a);
            break;
        default : "OOPS WRONG FUNCTION !!!!!!";
    } 
    return 0;
}