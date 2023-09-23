#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, gcdb, gcdf, bi = 0, fi = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            gcdb = gcdf = __gcd(a, b);
            // a=101,b=106;
            int i = 0;
            while (i < abs(a - b))
            {
                if (gcdb < __gcd(a, b))
                {
                    gcdb = __gcd(a, b);
                    bi = i;
                }
                a--, b--;
                i++;
            }
            i = 0;
            while (i < abs(a - b))
            {
                if (gcdf < __gcd(a, b))
                {
                    gcdf = __gcd(a, b);
                    fi = i;
                }
                a++, b++;
                i++;
            }
            cout << gcdf << " " << min(bi, fi) << endl;
        }
        // cout << __gcd(a,b);
    }

    return 0;
}