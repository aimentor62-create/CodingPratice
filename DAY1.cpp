//Find the target ina a given array 
// arr [5] = {1, 5, 8, 9,  6};
// target = 6

#include<iostream>
using namespace std;
int main () {
    int arr [5] = {1, 5, 8, 9,  6};
    int target = 9;
    int flag = 0;
    for(int i =0; i<5; i++){
        if(arr[i] == target){
            cout<<"the  target is found "<< i;
            flag = 1;
        }
        if (flag == 0){
            cout<<"the targe is not found";
        }

    }
}
