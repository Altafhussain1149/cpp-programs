#include<iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<endl;
    int dearness;
    dearness=salary*40/100;
    int rent=salary*20/100;
    salary=salary-(dearness+rent);
    cout<<"Your dearness expenses are: "<<dearness<<endl<<"Your rent is: "<<rent<<endl<<"Your salary after all expenses is: "<<salary<<endl;
    return 0;
}