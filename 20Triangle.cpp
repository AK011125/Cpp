#include<iostream>
using namespace std;
int main (){
    int n,m;
    cout<<"Enter rows : ";
    cin>>n;
    cout<<"Enter colomuns : ";
    cin>>m;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}