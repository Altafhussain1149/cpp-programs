#include <iostream>
using namespace std;
int main()
{
    int date, month, year;
    cout << "Enter the values for date-month-year: ";
    // scanf("%d %d %d",date,month,year);
    cin >> date >> month >> year;
    // cout << date << month << year;
    int count = 0;
    count = count + (date % 7);
    month--;
    year=year-1;
    switch (month)
    {
    case 0: // jan
        count = count + 0;
        break;
    case 1: // feb
        count=count+3;
        break;
    case 2: // march
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 4;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 4;
        }
        break;
    case 3: // april
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 7;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 7;
        }
        else
        count=count+6;
        break;
    case 4: // may
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 9;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 9;
        }
        else
        count=count+8;
        break;
    case 5: // june
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 12;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 12;
        }
        else
        count=count+11;
        break;
    case 6: // july
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 14;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 14;
        }
        else
        count=count+13;
        break;

    case 7: // august
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 17;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 17;
        }
        else 
        count=count+16;
        break;
    case 8: // sep
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 20;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 20;
        }
        else
        count=count+19;
        break;

    case 9: // oct
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 23;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 23;
        }
        else
        count=count+22;
        break;

    case 10: // nov
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 25;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 25;
        }
        else
        count=count+24;
        break;

    case 11: // dec
        if ((year + 1) % 100 == 0)
        {
            if ((year + 1) % 4 == 0)
                count = count + 28;
        }
        else if ((year+1) % 4 == 0)
        {
            count = count + 28;
        }
        else
        count=count+27;
        break;
    }
    int leapyear, nonleap;
    /*if (year > 1600 && year < 2000)
    {
        count = count + 1;
        year = year - 1600;
        year = year % 100;
        leapyear = year / 4;
        nonleap = year - leapyear;
        count = count + ((leapyear * 2) % 7);
        count = count + (nonleap % 7);
    }
    else if (year > 2000)
    {
        year = year - 2000;
        leapyear = year / 4;
        nonleap = year - leapyear;
        count = count + ((leapyear * 2) % 7);
        count = count + (nonleap % 7);
    }
    else if (year == 400 || year == 800 || year == 1200 || year == 1600 || year == 2000)
    {
        count = count + 0;
    }
    */
    year = year % 400;
    if (year >= 300 && year < 400)
    {
        count = count + 1;
        year = year - 300;
        leapyear = year / 4;
        nonleap = year - leapyear;
        count = count + ((leapyear * 2) % 7);
        count = count + (nonleap % 7);
    }
    else if (year >= 200 && year < 300)
    {
        count = count + 3;
        year = year - 200;
        leapyear = year / 4;
        nonleap = year - leapyear;
        count = count + ((leapyear * 2) % 7);
        count = count + ((nonleap) % 7);
    }

    else if (year >= 100 && year < 200)
    {
        count = count + 5;
        year = year - 100;
        leapyear = year / 4;
        nonleap = year - leapyear;
        count = count + ((leapyear * 2) % 7);
        count = count + (nonleap % 7);
    }
    else if (year < 100)
    {
        leapyear = year / 4;
        nonleap = year - leapyear;
        count = count + ((leapyear * 2) % 7);
        count = count + (nonleap % 7);
    }

    count = count % 7;
    switch (count)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    }
    // cout<<count;
    return 0;
}