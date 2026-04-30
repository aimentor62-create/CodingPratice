#include<iostream>
using namespace std;

int main() {
    int n =22;
    int* ptr = &n;
    ptr++;
    cout<<ptr;
    cout<<"after increment ";
    ptr--;
    cout<<"after decrement";
    cout<<ptr;
}