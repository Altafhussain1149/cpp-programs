#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to check whether the number is even or odd: "<<endl;
    cin>>num;
    if(num%2==0)
        cout<<"The number entered is even:-)"<<endl;
    else 
    cout<<"The number entered is odd:-("<<endl;

return 0;
}