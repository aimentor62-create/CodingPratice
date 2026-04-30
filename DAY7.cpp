#include<iostream>
using namespace std;
int main() {
int a[6] = {2,8,36,40,89,90};
int n = 89;
int flag = 0;
for(int i = 0; i < 6; i++){
    if(n == a[i]){
        cout<<"element found";
        flag = 1;
        break;
    }
}
if(flag != 1){
cout<<"element not found";
}
}
