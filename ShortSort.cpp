#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        if(str=="bca" || str=="cab"){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}