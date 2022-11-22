#include <iostream>

using namespace std;

int main()
{
    string str, uniqueStr = "";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (uniqueStr.find(str[i]) == -1)
        {
            uniqueStr += str[i];
        }
    }
    cout << ((uniqueStr.length() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
};