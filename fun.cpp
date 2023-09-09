#include <iostream>
using namespace std;

int main()
{
    int arr[10], count = 0, i, j, flag;
    cout << "Enter the elements of array:" << endl;
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    for (i = 0; i < 10; i++)
    {
        flag = 0;
        if (i == 0)
        {
            for (j = 1, j < 10, j++)
            {
                if(arr[i] == arr[j])
                count++;
            }
            cout << arr[i] << "=" << count << endl;
            count = 0;
        }
        else
        {
            for (j = i; j >= 1; j--)
            {

                if (arr[j] == arr[j - 1])
                    flag = 1;
            }
            if (flag == 1)
                continue;
            else
            {
                for (j = i; j < 10; j++)
                {
                    if (arr[j] == arr[j + 1])
                        count++;
                }
                cout << arr[i] << "=" << count << endl;
            }
        }
        // if(flag==1)
        // break;
    }

    return 0;
}