#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, k, H, h, c;
    cin >>t;
    while(t--){
        cin >> n >> m >> k >> H;
        c=0;
        for(int i=0; i<n; i++){
            cin >> h;
            if(abs(h-H)%k==0 && abs(h-H)/k<m && h!=H){
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}