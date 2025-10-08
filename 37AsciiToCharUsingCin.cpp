#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    int x = (char)a;        // it can also be (char) or (int) both works here
    cout<<"Ascii value of the given character is "<<x;
    return 0;
}