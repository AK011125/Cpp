#include<iostream>
using namespace std;
int main(){
    int highest = 0 , secondhighest = 0 , index = 0;
    int arr [] = {1,2,30,4,5,4,3,65,3,22,12};
    for(int i = 1; i< size(arr); i++){
       if(highest<=arr[i]){
            highest = arr[i];
            index = i;
        }
   }
   arr[index] = 0;              //we will make highest = 0 so that we can find 2nd highest
   for(int i = 1; i< size(arr); i++){
       if(secondhighest<=arr[i]){
            secondhighest = arr[i];
        }
   }

    cout<<" Second Highest : "<<secondhighest;
    return 0;
}