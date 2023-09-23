#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int c1, c2, c3;
    int n;
    vector<vector<int>> v;
    vector<int> temp;

    while (t--)
    {
        cin >> n;

        if (n % 3 == 0)
        {
            // cout << n / 3 << " " << n / 3 << endl;
            temp.push_back(n / 3);
            temp.push_back(n / 3);
        }
        else if (n % 3 == 1)
        {
            // cout << (n / 3) + 1 << " " << n / 3 << endl;
            temp.push_back(n / 3 + 1);
            temp.push_back(n / 3);
        }
        else
        {
            // cout << n / 3 << " " << (n / 3) + 1 << endl;
            temp.push_back(n / 3);
            temp.push_back(n / 3 + 1);
        }
        v.push_back(temp);
        temp.clear();
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i][0] << " " << v[i][1] << endl;
    }

    return 0;
}