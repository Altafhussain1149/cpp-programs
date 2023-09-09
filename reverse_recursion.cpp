#include<iostream>
using namespace std;
int count=0;
int recursion(int x)
{
    if(x==0)
    return 0;
    else 
    {
        count++;
    return ((x%10)*10^count+recursion(x/10));
}
}
int main()
{
    // cout<<"hello world";
int num;
cout<<"Enter integer number: ";
cin>>num;
int reverse=recursion(num);
cout<<reverse;
return 0;
    
}