#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Base No : ";
    cin>>a;
    cout<<"Enter Power No : ";
    cin>>b;

    int result = 1;
    for(int i =1;i<=b; i++){
        result =result*a;
    }
    cout<<result;
    return 0;
}