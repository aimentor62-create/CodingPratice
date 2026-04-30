#include<iostream>
using namespace std;

int main (){
    int password;
    do{
        cout<<"Enter password \n";
        cin>>password;
        if(password == 0){
            cout<<"Good bye";
            break;
        }
        else{
            cout<<"Come in";
        }
        
    }
    while(password != 0);
    
        
}