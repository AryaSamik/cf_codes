#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int gcd(int x, int y)
{
    int ans = 1;

    for (int i = 1; i <= min(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            if (i > ans)
            {
                ans = i;
            }
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                cout << "gcd of " << arr[i] << " and " << 2 * arr[j] << " is " << gcd(arr[i], 2 * arr[j]) << endl;
                // cout << "gcd of " << 2 * arr[i] << " and " << arr[j] << " is " << gcd(2 * arr[i], arr[j]) << endl;
                if (gcd(arr[i], 2 * arr[j]) > 1)
                {
                    count++;
                }
                // if (gcd(2 * arr[i], arr[j]) > 1)
                // {
                //     count++;
                // }
            }
        }

        cout << count;
    }

    return 0;
}