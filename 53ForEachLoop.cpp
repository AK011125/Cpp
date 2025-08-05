#include<iostream>
using namespace std;
int main(){
    int arr []= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    //for loop
    for(int ele:arr){
        cout<<ele<<endl;
    }

    // while loop 
    int index = 0;
    while(index < n){
        cout<<arr[index]<<endl;
        index++;
    }
    return 0;
}