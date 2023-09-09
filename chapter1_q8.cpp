#include<iostream>
using namespace std;
int main()
{
    int cash,hun,fifty,tens;
    cout<<"Enter the amount you want to withdraw:"<<endl;
    cin>>cash;
    hun=cash/100;
    cash=cash%(hun*100);
    fifty=cash/50;
    cash=cash%(fifty*50);
    tens=cash/10;
    cout<<"Denominations for hundred rupee note: "<<hun<<endl;
    cout<<"Denominations for fifty rupee note: "<<fifty<<endl;
    cout<<"Denominations for ten rupee note: "<<tens<<endl;

    return 0;
}