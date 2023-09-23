#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    float res;
    // cin >> t;
    t=10000;
    while (t--)
    {
        
        // cin >> n;
        n=t;
        cout <<n << " ";
        res = log(n) / log(2);
        if (res == ceil(res))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        // t--;
    }

    return 0;
}