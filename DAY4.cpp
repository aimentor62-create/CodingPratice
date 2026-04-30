#include<iostream>
using namespace std;
int a, b;
int add (){
       cout<<a + b; 
       return 0;
    }
    int sutract(){
        cout<<a - b;
        return 0;
    }
    int multiply(){
        cout<<a * b;
        return 0;
    }
    
    int divide () {
        cout<< a % b;
        return 0;
    }
    
   

int main(){
    
    cout<<"Enter variale enter a and b \n";
   
    cin>>a>>b;
    char sign;
    cout<<"enter operator";
    cin>>sign;
    
     switch(sign){
        case '+':
        add();
        break;
        case '-':
        sutract();
        break;
        case '*' :
         cout<<a * b;
         break;
         case '/':
         divide ();
         break;
    }
    
    return 0;
}