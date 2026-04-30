//Find the peak element : An element is called peak element if it's value is not smaller than the value of adjacent elements if they exist
#include<iostream>
using namespace std;

int main () {
    int a[] = {2, 3, 5, 1, 4};
    int n = 5;
    int low = 0, high = n -1;
    
    while(low< high){
        int mid = a[low] +( a[high] - a[low]) /2;
        if((a[mid] < a[mid +1]) && (a[mid] ==  0 || a[mid]> a[mid +1])){
            cout<<a[mid];
        }
        else if(a[mid]< a[mid + 1]){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    
    return 0;
}