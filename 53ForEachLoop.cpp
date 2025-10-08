#include<iostream>
using namespace std;
int main(){
    int arr []= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    //for loop
    for(int i:arr){
        cout<<i<<endl;
    }

    // while loop 
    int j = 0;
    while(j < n){
        cout<<arr[j]<<endl;
        j++;
    }
    return 0;
}