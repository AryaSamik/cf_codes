#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        string str;
        cin>>str;
        int i=0;
        char ch=' ';
        int ans=0;
        while(i<n){
            ch=str[i];
            if(ch=='B'){
                i=i+k;
                ans++;
                continue;
            }
            i++;
        }
        cout << ans<<endl; 
    }

    return 0;
}