#include <iostream>
using namespace std;
int main()
{
    int num, i, sum = 0;
    cout << "Enter a number:" << endl;
    cin >> num;
    sum = sum + num % 10;
    for (i = 0; i < 3; i++)
        num = num / 10;
    sum = sum + num % 10;
    cout << "The sum of first and last digit is: " << sum << endl;
    return 0;
}