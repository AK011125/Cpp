#include<iostream>
using namespace std;
int add(int a, int b = 0, int c = 0){ // b = 0 and c = 0 are default functions
    return (a+b+c);
}
int main(){
    cout<<add(2)<<endl;
    cout<<add(2,3)<<endl;
    cout<<add(2,3,4)<<endl;
    return 0;
}