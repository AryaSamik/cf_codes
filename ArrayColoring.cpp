#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,*a,no;
    cin >> t;
    while(t--){
        cin >> n;
        a = new int[n];
        no=0;
        for(int i =0;i<n; i++){
            cin >> a[i];
            if(a[i]%2 != 0){
                no++;
            }
        }
        if(no%2==0){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}