#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        c = 0;
        while (n--)
        {
            cin >> a >> b;
            if (a > b)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}