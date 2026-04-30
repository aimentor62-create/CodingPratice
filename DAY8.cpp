#include<iostream>
using namespace std;
int main() {
    int a[] = {0, 1,2,0,0,2,2,1};
    int n = 7;
    int low = 0, mid = 0, high = 6;
    while(mid <= high){
        if (a[mid] == 0){
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            a[mid]++;
            a[low]++;
        }
        else if (a[mid] == 1){
            a[mid]++;
        }
        else{
            int t = a[mid];
            a[mid] = a[high];
            a[high] = t;
            a[high]--;
        }
        
    }
    for(int i  = 0; i< n; i++){
         cout<<a[i];
    }
   
}