#include<iostream>
using namespace std;
int main()
{
    int population;
    cout<<"Enter the total population: ";
    cin>>population;
    int lit_men=35*population/100;
    int ill_men=52*population/100-lit_men;
    int ill_women=52*population/100-ill_men;
    cout<<"Illiterate women are: "<<ill_women;
    cout<<endl;
    cout<<"Illiterate men are: "<<ill_men;
}