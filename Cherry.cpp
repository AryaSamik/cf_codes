#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long* arr = new long long[n];
        for(int i=0; i < n; i++){
            cin >> arr[i];}
        long long mul=arr[0]*arr[1],ans=mul;
        for(int i=1; i<n-1; i++){
            mul=arr[i]*arr[i+1];
            if(mul>ans){
                ans=mul;
            }
        }

        cout <<ans << endl;
    }

    return 0;
}