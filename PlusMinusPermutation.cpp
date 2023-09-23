#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t,n,x,y,xsum,ysum,end,start;
    cin >> t;
 
    while(t--){
        cin >> n >> x >> y;
        xsum=0,ysum=0;
        end=n,start=1;

        int i=x;
        while(i<=n){
            if(i%y==0){
                i+=x;
                continue;
            }
            xsum+=end;
            end--;
            i+=x;
        }

        i=y;
        while(i<=n){
            if(i%x==0){
                i+=y;
                continue;
            }
            ysum+=start;
            start++;
            i+=y;
        }
        // cout<<ysum;

        cout<<xsum-ysum<<endl;
    }
 
    return 0;
}