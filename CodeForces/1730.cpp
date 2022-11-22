#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int testCases = 1;
    // cin >> testCases;
    while (testCases--)
    {
        int planetsNum, secondCost;
        cin >> planetsNum >> secondCost;

        vector<int> planets;
        for (int i = 0; i < planetsNum; i++)
        {
            int input;
            cin >> input;
            planets.push_back(input);
        }

        sort(planets.begin(), planets.end());

        int result = 0;
        int i = 0;
        while (i < planetsNum)
        {
            if (planets[i] == planets[i + 1])
            {
                int counter = count(planets.begin(), planets.end(), planets[i]);
                result += counter < secondCost ? counter : secondCost;
                i += counter - 1;
            }
            else
            {
                result += 1;
            }
            i++;
        }

        cout << result << endl;
    }
    return 0;
};