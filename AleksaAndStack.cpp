#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n,* a, x;
    cin >> t;
    while(t--){
        cin >> n;
        a = new int[n];
        a[0]=1, a[1]=3;
        x=4;
        int i=2;
        while(i < n){
            if( (3*x) % (a[i-1]+a[i-2]) == 0 ){
                x++;
                continue;
            }
            else{
                a[i]=x++;
            }
            i++;
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout << endl;
    }
}