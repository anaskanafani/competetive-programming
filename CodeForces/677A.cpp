#include <iostream>

using namespace std;

int main()
{
    int number, height;
    cin >> number >> height;
    int array[number];
    for (int i = 0; i < number; i++)
    {
        cin >> array[i];
    }
    int weight = 0;
    for (int i = 0; i < number; i++)
    {
        if (height >= array[i])
        {
            weight++;
        }
        else
        {
            weight += 2;
        }
    }
    cout << weight << endl;

    return 0;
};