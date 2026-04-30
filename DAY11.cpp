// Count number of even and odd elements in an array
#include<iostream>
using namespace std;

int main () {
    int arr [5] = {7,8, 45, 8, 89};
    int n = 5;
    for (int i = 0; i< n; i++){
        if(arr[i]%2 == 0){
            cout<<arr[i]<<" number is even \n";
        }
        else{
            cout<<arr[i]<<" number is odd\n";
        }
    }
}
