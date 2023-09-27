#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n, k, x, min, max;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> x;
        min=(k*(k+1))/2;
        max=(n*(n+1))/2 - ((n-k)*(n-k+1))/2;
        // cout << max << " " << min << " ";
        if(x>=min  &&  x<=max){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}