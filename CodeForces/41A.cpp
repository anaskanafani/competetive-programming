#include <iostream>

using namespace std;

int main()
{
    string str, translate;
    cin >> str;
    cin >> translate;

    reverse(str.begin(), str.end());
    cout << (str == translate ? "YES" : "NO") << endl;
    return 0;
};