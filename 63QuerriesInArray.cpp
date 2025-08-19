#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 1 , 4 , 5 , 2 , 6 , 2, 3, 4, 5};

    const int n = 1e5 + 10;
    vector<int> freq(n, 0);
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        int queryelement;
        cout << "Enter the element to query: ";
        cin >> queryelement;
        cout << "Frequency of " << queryelement << " is : " << freq[queryelement] << endl;

    }
    return 0;
}