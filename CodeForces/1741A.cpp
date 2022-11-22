#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string size1, size2;
        cin >> size1 >> size2;
        if (size1[size1.length() - 1] > size2[size2.length() - 1])
        {
            cout << "<" << endl;
        }
        else if (size1[size1.length() - 1] < size2[size2.length() - 1])
        {
            cout << ">" << endl;
        }
        else if (size1[size1.length() - 1] == size2[size2.length() - 1])
        {
            if (size1.length() == size2.length())
            {
                cout << "=" << endl;
            }
            else
            {
                if (size1[size1.length() - 1] == 'S')
                {
                    cout << (size1.length() > size2.length() ? "<" : ">") << endl;
                }
                else
                {
                    cout << (size1.length() > size2.length() ? ">" : "<") << endl;
                }
            }
        }
    }
    return 0;
};