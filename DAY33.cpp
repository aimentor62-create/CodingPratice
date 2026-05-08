// Find the Missing Number

#include <iostream>
using namespace std;

int main () {
    int num[4] = {0, 1, 3, 4};
    int n = 4;
    int total = n * (n + 1)/2;
    int sum = 0;
    for(int i = 0; i<4; i++){
        sum += num[i];
        cout<<sum;     
    }
}