#include <iostream>

using namespace std;

int main()
{
    string firstName;
    cin >> firstName;

    string secondName;
    cin >> secondName;

    string pile;
    cin >> pile;

    string resultName = firstName + secondName;

    sort(resultName.begin(), resultName.end());
    sort(pile.begin(), pile.end());

    cout << (pile == resultName ? "YES" : "NO") << endl;

    return 0;
};