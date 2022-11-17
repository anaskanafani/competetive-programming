#include <iostream>

using namespace std;

int main()
{
    long number;
    cin >> number;
    long lastDigit, beforeLastDigit;
    if (number >= 0)
    {
        cout << number << endl;
    }
    else
    {
        // last = n / 10
        string numberStr = to_string(number);
        numberStr.erase(numberStr.length() - 1, 1);
        lastDigit = stoi(numberStr);
        // beforeLastDigit = n / 100 * 10 + n % 10
        numberStr = to_string(number);
        numberStr.erase(numberStr.length() - 2, 1);
        beforeLastDigit = stoi(numberStr);

        cout << (beforeLastDigit > lastDigit ? beforeLastDigit : lastDigit) << endl;
    }
    return 0;
};