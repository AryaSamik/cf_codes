#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;

    while(t--){
        cin >> n;
        if(n%2==0){
            for(int i=2; i<=n; i+=2){
                cout << i << " " << i-1 <<" ";
            }
        }
        else{
            cout << "3 1 2 ";
            int i=5;
            while(i<=n){
                if(i==3){
                    i++;
                    continue;
                }
                cout << i << " " << i-1 <<" ";
                i+=2;
            }
        }
        cout << endl;
    }

    return 0;
}