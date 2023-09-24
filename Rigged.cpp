#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,*s,*e;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        s=new int[n];
        e=new int[n];
        for(int i=0; i<n;i++){
            cin >> s[i] >> e[i];
        }
        int w=s[0];
        int ans=1;
        for(int i=1; i<n;i++){
            if(s[i] >= w){
                if(e[i] >= e[0]){
                    ans=0;
                }
            }
        }
        if(ans==1){
            cout << w<<endl;
        }
        else{
            cout << -1<<endl;
        }
    }

    return 0;
}