#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t; // test cases

    for (int x = 0; x < t; x++)
    {
        cin >> n; // array size
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; // array initialization
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((arr[j] - arr[i]) == (j - i))
                {
                    count++;
                }
            }
        }
        delete(arr);
        cout << count++;
    }

    return 0;
}