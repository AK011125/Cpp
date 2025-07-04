#include<iostream>
using namespace std;
int add(int , int);  //its a prototype use when we define function below main function
int main(){
    int a = 11;
    int b = 32;
    cout<<add(a,b);

    return 0;
}

int add(int c, int d){
    int sum = c+d;
    return sum;
}