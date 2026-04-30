//Check if a number is Palindrome
#include<iostream>
using namespace std;

int main () {
    int r, temp, num, sum =0;
    cout<<"Enter a number \n";
    cin>> num;
    temp = num;
    while (num > 0) {
        r = num % 10;
        sum = r + sum * 10;
        num = num/ 10;
    }
    
    if(temp = sum) {
        cout<<"The number is palidrome";
    }
    else{
        cout<<"The number is not palidrome";
    }
}