//Program to count vowels in a string
#include<iostream>
using namespace std;

int main () {
    char str[50], v[11]= {"aeiouAEIOU"};
    int i, j, count = 0;
    for (i = 0 ;  str[i]; i++){
        for(j=0; v[j]; j++){
            if(str[i]==v[j]){
                count++;
                break;
            }
        }
    }
  
    cout<<"Total number of vowels  in "<<str<<count;
}
