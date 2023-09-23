#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    int t;
    cin >> t;
    while (t--)
    {
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '3')
            {
                cout << "37" <<endl;
                break;
            }
            if (str[i] == '7')
            {
                cout << "73"<<endl;
                break;
            }
        }
    }

    return 0;
}