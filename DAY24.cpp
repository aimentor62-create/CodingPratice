//Product of Array Except Self
//int arr[4] = {1,2,3,4}

#include<iostream>
using namespace std;

int main () {
    int arr[4] = {1,2,3,4};
    int n = 4;
    int result[4];
    for(int i= 0; i <n; i++){
        int product = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                product = arr[j] * product;
            }
        }
        result[i] = product;
    }
    cout<<"The output array \n";
      for(int i= 0; i <n; i++){
          cout<<result[i]<<"\n";
      }
}