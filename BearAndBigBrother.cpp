#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b;
    cin >> a>>b;
    float ans=log(b/a)/log(1.5);
    if(ans == ceil(ans)){
        cout << ceil(ans)+1;
    }
    else{
        cout << ceil(ans);
    }

    return 0;
}