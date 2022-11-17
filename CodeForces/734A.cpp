#include <iostream>

using namespace std;

int main()
{
    int games;
    cin >> games;

    string str;
    cin >> str;

    int antonCount = 0;

    for (int i = 0; i < str.length(); i++)
    {
        (str[i] == 'A' ? antonCount++ : antonCount--);
    }

    if (antonCount == 0)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << (antonCount < 0 ? "Danik" : "Anton") << endl;
    }

    return 0;
};