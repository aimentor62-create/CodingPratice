// grading for students;
// marks will give the grade

#include<iostream>
using namespace std;

int main () {
    float marks;
    cout<<"Enter marks";
    cin>>marks;
    
    if(marks>90){
        cout<<"A grade";}
        else if( marks > 80 &&  marks > 70){
            cout<<"B grade";
        }
        else if( marks > 60 && marks >50){
             cout<<"c grade";
        }
        else if(marks < 50 && marks == 40){
            cout<<"D grade";
        }
        else{
            cout<<"fail";
        }
    }

