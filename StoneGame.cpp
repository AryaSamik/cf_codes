#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int* a = new int[n];
    cin >> a[0];
    int max=0, min=0;
    for(int i=1; i<n; i++){
        cin >> a[i];
        max=(a[max]<a[i])?i:max;
        min=(a[min]>a[i])?i:min;
    }
    max++,min++;
    if(max<n/2 && min<n/2){
        cout << "*"<<((max>min)?max:min)+1;
    }
    else if(max>n/2 && min>n/2){
        cout << "^"<<n - ((max>min)?min:max);
    }
    else{
        if(abs(max-min)>=n/2){
            cout << "#"<<((max>min)?min:max) + 1 + n - ((max>min)?max:min);
        }
        else{
            cout << "~"<<((max>min)?max:min) + 1;
        }
    }
}

int main(){
    int t; 
    cin >> t;

    while(t--){
        solve();
        cout << endl;
    }
}