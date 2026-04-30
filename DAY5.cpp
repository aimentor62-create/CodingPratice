#include<iostream>
using namespace std;

int main () {
    int a, b, sum;
    cout<<"Enter values";
    cin>>a>>b;
    sum = a + b;
    int* ptr = &sum;
    cout<<&sum;
}