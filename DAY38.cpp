//How stack works in c++;

#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> num;
    num.push(45);
    num.push(78);
    num.push(12);
    cout<<num.top();
}