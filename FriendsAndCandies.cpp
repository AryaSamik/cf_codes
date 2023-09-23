#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long n, ans; 
    double res;
    cin >> t;
    while(t--){
        ans=0;
        res=0.0;
        cin >> n;
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            res+=arr[i];
        }
        res=res/n;
        if(res == (long long)res){
            for(int i=0; i<n; i++){
                if(res < arr[i]){
                    ans++;
                }
            }
        }
        else{
            cout << -1 << endl;
            continue;
        }
        cout << ans<< endl;
    }

    return 0;
}