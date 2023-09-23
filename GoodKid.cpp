#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int* arr=new int[n];
        for(int i=0; i<n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        arr[0]=arr[0]+1;
        long long prod=1;
        for(int i=0; i<n; i++){
            prod*=arr[i];
        }    
        cout << prod<<endl;
    }
    return 0;
}