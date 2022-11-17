#include <iostream>

using namespace std;

int main()
{
    int two = 0, three = 0, five = 0, six = 0, result = 0;
    cin >> two >> three >> five >> six;
    
    while (two > 0 && five > 0 && six > 0)
    {
        result += 256;
        two--, five--, six--;
    }

    while (two > 0 && three > 0)
    {
        result += 32;
        two--, three--;
    }

    cout << result << endl;
    return 0;
};