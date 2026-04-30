//Average numbers in array
#include<iostream>
using namespace std;

int main (){
    int arr[4] = {45, 89, 35, 62};
    int n = 4, sum = 0;
    for (int i = 0; i < n; i++) {
        sum = arr[i] + sum;
    }
    int average = sum / n;
    cout<<average ;
}