#include <iostream>

using namespace std;

int main()
{
    // freopen("test.in", "r", stdin);
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int result = 0;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] > str2[i])
        {
            result = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            result = -1;
            break;
        }
    }

    cout << result << endl;

    return 0;
};