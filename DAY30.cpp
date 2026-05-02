//num = {3, 2, 4, 6}
//target = 6

#include <iostream>
using namespace std;

int main () {
    int num[4] = {3, 2, 4, 6};
    int target = 6;
    for(int i = 0; i<4; i++){
for (int j = 1 + i; j<4; j++)
if(num[i] + num[j] == target ){
cout<<"Target found";
}
}
}