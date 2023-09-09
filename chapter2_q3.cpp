#include<iostream>
using namespace std;
int main()
{
    bool a,b,c;
    cout<<"Enter 0 or 1 according to your specifications of steel:"<<endl<<"(0 signifies NO and 1 signifies YES)"<<endl;
    cout<<"1.Is your metal hardness greater than 50"<<endl;
    cin>>a;
    cout<<"2.Is carbon content less than 0.7"<<endl;
    cin>>b;
    cout<<"3.Is Tensile strength greater than 5600"<<endl;
    cin>>c;
    if(a==1 && b==1 && c==1)
    cout<<"Grade 10"<<endl;
    else if(a==1 && b==1)
    cout<<"Grade 9";
    else if(b==1 && c==1)
    cout<<"Grade 8";
    else if(a==1 && c==1)
    cout<<"Grade 7";
    else if((a==1 && b==0 && c==0)||(a==0 && b==1 && c==0)||(a==0 && b==0 && c==1))
    cout<<"Grade 6";
    else 
    cout<<"Grade 5";
    


    return 0;
}