//find the factorial
// int n = 10;
#include<iostream>
using namespace std;

int main () {
    int n = 10;
    int result [1000];
    int size = 1;
    result [0] = 1;
    for (int x = 2; x<= n; x++){
        int carry = 0;
        for(int i  = 0;  i < size; i++){
            int product = result[i] * x + carry;
            result[i] = product % 10; // 123% 10=3 
            carry = product /10;  // 123 /10 =  12
        }
        while(carry){
            result[size] = carry % 10; // 24 * 5 carry = 2
            carry = carry /10;  
            size++;
        }
    }
    for (int  i  = size -1; i >= 0; i--)
    cout<<result[i];
}
