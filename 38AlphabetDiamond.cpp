#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;

    for(int i =1; i<=n; i++){
        for(int j =1; j<=(n-i) ;j++){
            cout<<" ";
        }
        for(int k =1; k<=(2*i-1); k++){
            char ch = (char)k+64;
            cout<<ch;
        }
        cout<<endl;
    }
    for(int l=1; l<=n; l++){
        for(int m =1; m<=l; m++){
            cout<<" ";
        }
        for(int a=1; a<=2*(n-l)-1; a++){
            char d = (char)a+64;
            cout<<d;
        }
        cout<<endl;
    }
    return 0;
}