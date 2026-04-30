//Q3-  Find maximum sub array
//Given: arr[9] = {-2,1,-3,4,-1,2,1,-5,4};

#include<iostream>
using namespace std;
int main () {
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    int maxsum = arr[0];
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum = arr[j] + sum;
            if(sum> maxsum){
                maxsum = sum;
            }
        }
    }
    cout<<maxsum;
}
