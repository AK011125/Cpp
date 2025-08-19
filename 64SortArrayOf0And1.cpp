#include<iostream>
using namespace std;
int main(){
    int arr [] = {1,0,0,0,1,0,1,1,1,1,0,1,0,1,0,1};
    int ZeroCount = 0;
    for(int i = 0; i < size(arr); i++){
        if(arr[i]== 0){
            ZeroCount = ZeroCount + 1;
        }
    }
    
    int brr [size(arr)];
    for(int i = 0; i < ZeroCount; i++){
        brr[i] = 0;
    }
    for(int i = ZeroCount; i < size(arr); i++){
        brr[i] = 1;
    }
    for(int i = 0; i < size(arr); i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}