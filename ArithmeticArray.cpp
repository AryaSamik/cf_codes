#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int* b = new int[n];
        int sum = 0;
        
        for(int i=0; i<n; i++){
            cin >> b[i];
            sum += b[i];
        }

        if(sum >= n){
            cout << (sum - n) << endl;
        }
        else{
            cout << 1 << endl;
        }

    }

    return 0;
}