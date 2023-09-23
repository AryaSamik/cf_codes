#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,k;
    cin>> t;

    while(t--){
        cin >> k;
        int i=1;
        int count=0;
        while(count<=k){
            if(i%3 == 0 || i%10 == 3){
                i++;
                continue;
            }
            else{
                count++;
                // cout << i << endl;
            }
            if(count==k){
                cout << i << endl;
                break;
            }
            i++;
        }
    }

    return 0;
}