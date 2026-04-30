//two sum pair with the given sum

#include<iostream>
using namespace std;

int main () {
int arr [5] = {2, 3, 8, 9, 1};
int n = 5;
int target  = 17;

for (int i = 0; i < n ; i++){
    for (int j = 1 + i ; j< n ; j++){
        if (arr[i] + arr[j] == target ){
          cout<<"the target is found \n"<<arr[i]<<"\n"<<arr[j];
        }
    }
}

}