//find the greatest number in array

#include<iostream>
using namespace std;
int main () {
    int num[3] = {7,2, 1};
    int max = num[0];
    for (int i = 0; i<3; i++){
        if(num[i]> max){
            max = num[i];
            cout<<max;
        }
    }
}