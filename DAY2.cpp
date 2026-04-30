// Write a program for adding two arrays 
// Input : arr1[3] ={1, 2, 3} arr2[3] = {4, 5, 6}
// output : arr3[3] = {5, 7, 9}

#include<iostream>
using namespace std;
int main () {
    int  arr1[3] ={1, 2, 3}, arr2[3] = {4, 5, 6};
    int sum[3]; 
    for (int i =  0; i<3; i++){
        sum[i] = arr1[i] + arr2[i];
        cout<<sum[i];
    }
}
