#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << 1 << " " << 3 << " ";
        for(int i=5; i< n-2+5; i++){
            cout << i<<" ";
        }
        cout << endl;
    }
}