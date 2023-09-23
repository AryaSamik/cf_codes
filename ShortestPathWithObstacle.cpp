#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, xa, xb, ya, yb, xf, yf;
    cin >> t;

    while(t--){
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        if(xa==xb){
            if(xf==xa && yf>min(ya,yb) && yf<max(ya,yb)){
                cout << abs(ya-yb)+2 << endl;
            }
            else{
                cout << abs(ya-yb)<<endl;
            }
        }
        else if(ya==yb){
            if(yf==ya && xf>min(xa,xb) && xf<max(xa,xb)){
                cout << abs(xa-xb)+2 << endl;
            }
            else{
                cout << abs(xa-xb)<<endl;
            }
        }
        else{
            cout << abs(xa-xb)+abs(ya-yb)<<endl;
        }
    }

    return 0;
}