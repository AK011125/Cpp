#include<iostream>
using namespace std;
int main(){
    int arr [] = {2,3,9,6,55,8,44,55}; //2 highest present
    int highest = 0, secondhighest = 0, index = 0;
    for(int i = 0;i < size(arr); i++){
        if(highest < arr[i]){
            highest = arr[i];
            index = i;
        }
    }
    for(int i = 0;i < size(arr); i++){ //It will make all highest 0
        if(highest == arr[i]){
            arr[i] = 0;
        }
    }
    arr[index] = 0;
    for(int i = 0;i < size(arr); i++){
        if(secondhighest < arr[i]){
            secondhighest = arr[i];
        }
    }
    cout<<"Second Highest : "<<secondhighest;
    return 0;
}