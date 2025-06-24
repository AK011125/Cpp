#include<iostream>
using namespace std;
int main(){
    int a = 45678;
    int b= sizeof(a);      // sizeof is use for getting size
    cout<<"Size of a :"<<b<<endl;

    //condition?true:false
    int c = 4;
    b == c?cout<<"equal":cout<<"Not equal";

    cout<<endl;
    cout<<&a; //Address operator

    cout<<endl;
    printf("Hello world");
    return 0;
}