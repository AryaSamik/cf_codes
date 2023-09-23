#include<bits/stdc++.h>
using namespace std;

int main(){
    float t, a, b, c;
    cin >> t;

    while(t--){
        cin >> a >> b >> c;
        cout << ceil(abs(a-b)/(2*c)) << endl; 
    }

    return 0;
}