#include<bits/stdc++.h>
using namespace std;

int gcd(long long x, long long y){
    long long t;
    while(x!=0){
        t=y%x;
        y=x;
        x=t;
    }
    return y;
}

int main(){
    long long t ,n ,x ,y , lcm;
    cin >> t;
    while(t--){
        cin >> n >> x >> y;
        lcm = (x*y)/gcd(x,y);
        // cout << lcm<<endl;
        cout << (n*(n+1)/2 - (n-(n/x - n/lcm))*(n-(n/x - n/lcm)+1)/2) - ((n/y - n/lcm)*((n/y - n/lcm)+1)/2) << endl;
    }

    return 0;
}