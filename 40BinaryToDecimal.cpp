#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no in binary form : ";
    cin>>n;

    int ans = 0;
    int power = 1;
    while(n>0){
        ans = ans + ((n%10)*power);
        power= power*2;
        n=n/10;
    }
    cout<<ans;
    return 0;
}