#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        int count = 0;
        cin >> m;

        vector<int> y(m);
        vector<int> x(m);
        int minY = numeric_limits<int>::max();
        int minX = numeric_limits<int>::max();

        for (int j = 0; j < m; j++)
        {
            cin >> y[j];
            minY = min(y[j], minY);
        }

        for (int j = 0; j < m; j++)
        {
            cin >> x[j];
            minX = min(y[j], minX);
        }

        for (int j = 0; j < m; j++)
        {
            if (x[j] > minX && y[j] > minY)
            {
                x[j]--;
                y[j]--;
                count++;
            }
            else if (x[j] > minX && y[j] == minY)
            {
                x[j]--;
                count++;
            }
            else if (y[j] > minY && x[j] == minX)
            {
                y[j]--;
                count++;
            }
        }
    }

    return 0;
}