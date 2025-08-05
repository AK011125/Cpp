#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    for(int i = 0; i < 5 ; i++){
        int element;
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>element;
        v.push_back(element);
    }
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // erase
    v.erase(v.end()-2); //it will erase last 2nd element


    //alternate method is for each loop

    for( int ele:v){
        cout<<ele<<" ";
    }


    return 0;
}