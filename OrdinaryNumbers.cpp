#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, ans;
    cin >> t;

    while(t--){
        cin >> n;
        
        x=1;
        ans=0;
        for(int i=1; i<=9; i++){
            ans+=min(9, n/x);
            x=x*10+1;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}