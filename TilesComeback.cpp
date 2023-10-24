#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, equal;
    cin >> t;
    while(t--){
        equal = 1;
        cin >> n >> k;
        int *c = new int[n];
        cin >> c[0];
        for(int i=1;i < n; i++){
            cin >> c[i];
            if(c[i]!=c[i-1]){
                equal=0;
            }
        }
        if( k==1 || equal==1){
            cout << "YES"<<endl;
        }
        else{
            int i=0, j=n-1, a=c[0], b=c[n-1], acount=0, bcount=0, aindex, bindex;
            while(i<n || j>=0){
                if(c[i]==a && acount < k){
                    acount++;
                    aindex=i;
                }
                if(c[j]==b && bcount < k){
                    bcount++;
                    bindex=j;
                }
                i++;
                j--;
            }
            // cout << aindex << " " << bindex << endl;
            if(acount==k && bcount==k && (aindex<bindex || a==b)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}