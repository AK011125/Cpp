#include<iostream>
using namespace std;

int add(int x,int y){
    int ans = x+y;
    return ans;
}

int add(int x,int y,int z){
    int ans = x+y+z;
    return ans;
}

float add(float x,float y){
    float ans = x+y;
    return ans;
}

int main(){
    int a=5;
    int b=9;
    int c=11;
    float d=4.3;
    float e=3.3;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(d,e)<<endl;

    return 0;
}