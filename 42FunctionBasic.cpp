#include<iostream>
using namespace std;
int sum(int c, int d){
    int ans = c+d;
    return ans;
}

int main(){
    int a = 5;
    int b = 4;

    cout<<sum(a,b);

    return 0;
}