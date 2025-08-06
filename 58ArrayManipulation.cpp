#include<iostream>
using namespace std;
int main(){
    int arr [] = {1,2,3,2,1,4,5,5,7,6,7,6};
    for(int i = 0;i < size(arr); i++){
        for(int j = (i+1);j < size(arr); j++){
            if(arr[i] == arr[j]){
                arr[i]= arr[j] = 0;
            }
        }
    }
    for(int i = 1;i < size(arr); i++){
        if(arr[i] > 0){
        cout<<arr[i]<<endl;
        }
    }
    return 0;
}