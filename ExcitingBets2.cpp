#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long a, b;
    while(t--){
        cin >> a >> b;
        if(a!=b){
            cout << abs(a-b) << " " <<min(a%abs(a-b), abs(a-b)-(a%abs(a-b)))<<endl;
        }
        else{
            cout << "0 0"<<endl;
        }
    }
    return 0;
}