//Remove Duplicates from Sorted Array

#include<iostream>
using namespace std;

int main(){
int num[5] ={1,1, 2,2, 3};
for(int i = 0; i<5; i++){
    if(num[i] != num[i-1]){
        cout<<num[i];
    }
}
}