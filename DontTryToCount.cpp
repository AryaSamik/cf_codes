#include<bits/stdc++.h>
using namespace std;

bool isPresent(string x, string s){
    string temp;
    for(int i =0; i<=x.size()-s.size(); i++){
        temp=x.substr(i,s.size());
        if(temp == s){return true;}
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, ans=0, b=0;
        string x, s;
        cin >> n >> m >> x >> s;
        while(!b){
            if(x.size()>m){
                // x+=x;
                // ans++;
                if(isPresent(x,s)){b=1;}
                else{
                    x+=x;
                    ans++;
                    if(isPresent(x,s)){b=1;}
                }
                break;
            }
            else if(x.size()==m){
                if(x == s){b=1;break;}
                else{x+=x;ans++;}
            }
            else{
                x+=x;
                ans++;
            }
            // cout << x <<endl;
        }
        if(b==1){
            cout << ans <<endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}