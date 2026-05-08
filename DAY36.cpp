//Find the riverse of a string;
#include<iostream>
using namespace std;


int main() {
    string s = "google";
    int start = 0;
    int end  = s.length() -1;
    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout<<s;
}