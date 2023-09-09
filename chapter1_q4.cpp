#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter a number to find sum of its digits:"<<endl;
    cin>>num;
    while(num)
    {
        sum=sum+num%10;
        num=num/10;
    }
    cout<<"The sum of its digits is: "<<sum;
    return 0;
}