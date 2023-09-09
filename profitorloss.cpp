#include <iostream>
using namespace std;
int main()
{
    int cp, sp;
    float profit, loss;
    cout << "Enter the cp of your article: ";
    cin >> cp;
    cout << "Enter the sp of your article: ";
    cin >> sp;
    if (cp > sp)
    {
        loss = cp - sp;
        cout << "You have incurred loss of Rs" << loss << endl;
        cout << "Which is " << (loss / cp) * 100 << " percent of cp" << endl;
    }
    else
    {
        profit = sp - cp;
        cout << "You have incurred profit of Rs" << profit << endl;
        cout << "Which is " << (profit / cp) * 100 << " percent of cp" << endl;
    }
    return 0;
}