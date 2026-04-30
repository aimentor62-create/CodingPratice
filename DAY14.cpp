// Check if a large number is divisible by 6 or not
#include<iostream>
using namespace std;
int main () {
    long num;
    cout<<"Enter a number \n";
    cin>>num;
    if(num % 6 == 0){
        cout<<num<<"the number is divible by 6";
    }
    else{
        cout<<num<<"the number is not divible by 6";
    }
}