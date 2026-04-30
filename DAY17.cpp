// check the number is perfect square or not
#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int x ;
    cout<<"enter number";
    cin>> x;
    if (pow((int)sqrt (x), 2 ) == x){
        cout<<"The number is perfect square ";
    }
    else{
         cout<<"The number is not perfect square ";
    }
}