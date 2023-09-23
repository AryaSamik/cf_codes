#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, s;
    cin >> t;

    while(t--){
        cin >> s;
        int x = floor(sqrt(s));
        if(s - pow(x,2) == 0)
            cout << x << endl;
        else
            cout << x+1 << endl;
    }

    return 0;
}