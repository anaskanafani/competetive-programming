#include <iostream>
 
using namespace std;
 
int main()
{
    int testCases; 
    cin >> testCases;
    while(testCases--){
        int n; 
        cin >> n;
        string str; 
        cin >> str;
        int rem = 0;
        for(int p = 0; p < str.size(); p++){
            rem += (str[p] == 'Q');
            rem -= (str[p] == 'A');
            rem = (rem > 0) ? rem : 0;
        }
 
        cout << (rem <= 0 ? "yes" : "no") << endl;
    }
 
    return 0;
};