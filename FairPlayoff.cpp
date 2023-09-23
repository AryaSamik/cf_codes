#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    int *arr = new int[4];
    cin >> t;

    while (t--)
    {
        int max1 = 0, max2 = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < 4; i++)
        {
            if (arr[max2] < arr[i])
            {
                max2 = i;
            }
        }
        if (max2 == 0)
        {
            max1 = 1;
        }
        for (int i = 1; i < 4; i++)
        {
            if (i == max2)
            {
                continue;
            }
            if (arr[max1] < arr[i])
            {
                max1 = i;
            }
        }
        // cout << max1 << " " << max2 << endl;
        if (abs(max1 - max2) >= 2 || (abs(max1 - max2) == 1 && min(max1, max2) == 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}