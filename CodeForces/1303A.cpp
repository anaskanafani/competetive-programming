#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        string numbers;
        cin >> numbers;
        int firstOne = -1, lastOne = -1, minRemove = 0;
        for (int i = 0; i < numbers.length(); i++)
        {
            if (numbers[i] == '1')
            {
                firstOne = i;
                break;
            }
        }

        for (int i = 0; i < numbers.length(); i++)
        {
            if (numbers[i] == '1')
            {
                lastOne = i;
            }
        }

        for (int i = firstOne; i < lastOne; i++)
        {
            if (numbers[i] == '0')
            {
                minRemove++;
            }
        }
        cout << minRemove << endl;
    }
    return 0;
};