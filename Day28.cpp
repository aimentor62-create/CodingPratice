// find maximum trapped rain water
// int height[12] = {0,1,0,2,1,0,1,3,2,1,2,1};


#include<iostream>
using namespace std;

int main () {
    int height[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = 12;
    int water = 0;
    for(int i = 1; i <n - 1; i++){
        int leftMax = height[i];
        int rightMax  =height[i];
        for(int j = 0; j<i ; j++){
            if(height[j]>leftMax){
               leftMax = height[j];
            }
        }
        for (int j = i + 1; j < n ; j++){
            if(rightMax<height[j]){
               rightMax = height[j]  ;
            }}
            int trappedWater = min(leftMax, rightMax) - 1;
        water = water + trappedWater;
    }
    cout<<water;
}