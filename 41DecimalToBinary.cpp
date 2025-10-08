#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no in decimal form : ";
    cin>>n;

    int ans =0;
    int power =1;
    while(n>0){
        int perrity = n%2;
        ans = ans + perrity*power;
        power = power*10;
        n=n/2;

    }
    cout<<ans;
    return 0;
}