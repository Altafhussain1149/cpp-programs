// #include<iostream>
// using namespace std;
// int main()
// {
//     int ch=0,health,gender;
//     cout<<"This program will tell if you are eligible to take insurance or not and how much premium you need to pay:"<<endl;
//    do
//     {
//         cout<<"How is your health\n1.Excellent\n2.Poor"<<endl;
//         cin>>health;
//         if(health==1)
//         {
//             cout<<"What is your gender\n1.Male\n2.Female"<<endl;
//             cin>>gender;
//         }
//         else if(health==2)
//         {
//             cout<<"What is your gender\n1.Male\n2.Female"<<endl;
//             cin>>gender;
//         }
//         else 
//         cout<<"Please enter proper input";
//         cout<<"Do you want to continue\n1.Yes\n0.No"<<endl;
//         cin>>ch;
//     }while(ch);
//     return 0;
// }
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    int res=0;

    for (int i = 0; i<5; i++)
    {
        res=res+(((n%10)))*pow(10,i);
        n=n/10;
    }
    cout<<res<<endl;


    return 0;
}