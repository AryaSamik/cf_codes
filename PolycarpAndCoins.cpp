#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int c1,c2,c1s,c2s;
    vector<vector<int>> v;
    vector<int> temp;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        // n = 0+i;

        int c1 = n - (n / 2 - 1) * 2, c2 = n / 2 - 1;
        int c1s = n - (n / 2) * 2, c2s = n / 2;

        while (abs(c2s - c1s) > abs(c2 - c1))
        {
            c1s = c1;
            c2s = c2;
            c2 = c2s - 1;
            c1 = n - c2 * 2;
        }

        temp.push_back(c1s);
        temp.push_back(c2s);
        v.push_back(temp);

        temp.clear();
        c1=0,c2=0,c1s=0,c2s=0;
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i][0] << " " << v[i][1] <<endl;
    }

    
    return 0;
}