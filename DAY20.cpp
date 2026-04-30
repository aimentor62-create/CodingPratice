// How to find salary of employee
//Gross Salary: Basic Salary + HRA (House Rent Allowance) + DA (Dearness Allowance) + Other Allowances.
//Net Salary (In-Hand): Gross Salary - Deductions (PF, Professional Tax, TDS).

#include<iostream>
using namespace std;
int main () {
    float basicSalary, //
    HRA, // House Rent allowance
    DA, // Dearness Allowance
    OtherAllowance; //otherAllowance
    cout<<"Enter basicSalary \n";
    cin>>basicSalary;
    cout<<"Enter HRA \n";
    cin>>HRA;
    cout<<"Enter  Dearness Allowance \n";
    cin>>DA;
    cout<<"Enter  Other Allowance \n";
    cin>>OtherAllowance;
    float grossSalary = basicSalary + HRA + DA + OtherAllowance;
    float deduction;
    cout<<"enter deduction";
    cin>>deduction;
    float netSalary = grossSalary - deduction;
    cout<<netSalary;
    
}