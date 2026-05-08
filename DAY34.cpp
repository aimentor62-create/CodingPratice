//find the repeating number in string

#include<iostream>
using namespace std;

int main() {
    int num [4] = {0, 1, 2, 0};
    bool repeat = false;
    for(int i = 0; i<4; i++){
        for(int j = i+1; j<4; j++)    {
            if(num[i] == num[j]){
                cout<<num[i];
                repeat = true; 
            }
        }
        }

        if(repeat){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
}
