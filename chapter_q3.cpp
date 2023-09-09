#include <iostream>
using namespace std;
int main()
{
    int marks[5], sum = 0;
    cout << "Enter the marks obtained by a student in 5 subjects:" << endl;
    for (int i = 0; i < 5; i++)
        cin >> marks[i];
    for (int i = 0; i < 5; i++)
        sum = sum + marks[i];
    int avg=sum/5;
    float per=sum/500.0*100;
    cout<<"The aggregate marks are: "<<avg<<endl;
    cout<<"The percentage obtained is: "<<per<<endl;
    return 0;

}