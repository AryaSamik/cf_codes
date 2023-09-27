#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, flag=0, * arr;
    cin >> t;
    while(t--){
        cin >> n >> k;
        flag=0;
        arr=new int[n];
        for(int i=0 ; i< n; i++){
            cin >> arr[i];
            if(arr[i]==k){flag=1;}
        }
        if(flag==1){cout << "YES" << endl;}
        else{cout << "NO" << endl;}
    }
}