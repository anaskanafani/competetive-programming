#include <iostream>

using namespace std;

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("result.in", "w", stdout);
    int num;
    cin >> num;
    int total = 0;
    int result = 0;
    while (num--)
    {
        int friend1, friend2, friend3;
        cin >> friend1 >> friend2 >> friend3;
        total = friend1 + friend2 + friend3;
        (total >= 2 ? result++ : result);
    }
    cout << result << endl;
    return 0;
};