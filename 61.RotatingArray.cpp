#include<iostream>
using namespace std;
int main(){
    int arr [] = {1,2,3,4,5,6,7,8,9};
    int n = size(arr);

    int k;
    cout<<"Enter a number : ";
    cin>>k;

    k = k%n;
    int j = 0;
    int ansarr [n];

    for(int i = (n-k);i < n; i++){
        ansarr[j++] = arr[i];
    }
    for(int i = 0;i < (n-k); i++){
        ansarr[j++] = arr[i];
    }
    for(int i = 0;i < n; i++){
        cout<<ansarr[i]<<" ";
    }

    return 0;
}