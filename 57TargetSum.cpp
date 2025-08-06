#include<iostream>
using namespace std;
int main(){
    int arr [] = {1,2,3,4,5,6,7,8,9};
    int a;
    cout<<"Enter the Target Sum : ";
    cin>>a;
    for(int i = 1; i < size(arr)/2 ;i++){
        for(int j = 1; j < size(arr);j++){
            if(i+j==a){
                cout<<i<<", "<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}