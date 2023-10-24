#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, flag;
    cin >>t;
    long long *a,* temp;
    while(t--){
        flag=1;
        cin >> n;
        a = new long long[n];
        temp = new long long[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            temp[i]=a[i];
        }
        sort(temp,temp+n);
        for(int i=0;i<n;i++){
            if(a[i]%2==0 && temp[i]%2==0){
                continue;
            }
            else if(a[i]%2!=0 && temp[i]%2!=0){
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            cout << "YES"<< endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}