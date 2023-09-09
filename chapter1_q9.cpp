#include<iostream>
using namespace std;
int main()
{
   long int num=12391,new_num=0,temp,d;
   int i;
   // cout<<"Enter a number: ";
   // cin>>num;

   temp=num;
   while(temp!=0){
      d=temp%10;
      if(d!=9)
         d++;
      else
         d=0;
      temp/=10;
      new_num=new_num*10+d;
   }
   temp=new_num;
   new_num=0;
   while(temp!=0){
      d=temp%10;
      temp/=10;
      new_num=new_num*10+d;
   }
   cout<<new_num;
}