#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;

    int need = (w * (w + 1) / 2) * k - n;
    if (need < 0)
        cout << 0;
    else
        cout << need;

    return 0;
}