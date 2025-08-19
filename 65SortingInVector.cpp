#include <iostream>
#include<vector>
using namespace std;

void SortFun(vector <int> &v){           //New way to pass vector in a function
    
    int ZeroCount = 0;
    for(int ele:v){                     // for(int ele:v)
        if(ele == 0){
            ZeroCount ++;
        }
    }
    for(int i = 0;i < v.size();i++){
        if(i < ZeroCount){
            v[i] = 0;
        }else{
            v[i] = 1;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the lenghth of vector : ";
    cin>>n;

    vector <int> v;

    for(int i = 0;i < n;i++){         //New way to take vector as input
        int ele ; cin>>ele; 
        v.push_back(ele);
    }

    SortFun(v);

    for(int i = 0;i < n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}