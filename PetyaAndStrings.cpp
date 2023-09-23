#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int sum1 = 0, sum2=0;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    for (int i = 0; i < s1.size(); i++)
    {
        sum1+=(int)s1[i];
        sum2+=(int)s2[i];
    }
    if(sum1>sum2){
        cout <<1 << endl;
    }
    if(sum1<sum2){
        cout <<-1 << endl;
    }
    if(sum1==sum2){
        cout <<0 << endl;
    }
}
int main()
{
    solve();
    return 0;
}