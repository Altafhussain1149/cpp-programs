#include<iostream>
using namespace std;
int main()
{
    int num,rev=0;
    cout<<"Enter a number to find its reverse:"<<endl;
    cin>>num;
    while(num)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    cout<<"Reverse of the number is: "<<rev;
    return 0;
}