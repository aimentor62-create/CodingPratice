//How to calculate percentage of student
//formula student percentage =  marks / total marks * 100
#include<iostream>
using namespace std;
int main() {
float marks, totalmarks;
cout<<"Enter marks\n";
cin>>marks;
cout<<"totalmarks\n";
cin>>totalmarks;
float studentPercentage = marks / totalmarks * 100;
cout<<studentPercentage<<"%";
}