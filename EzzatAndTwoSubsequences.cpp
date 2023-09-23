#include<bits/stdc++.h>
using namespace std;

double max(double *arr, int n){
    int flag=arr[0];
    for (int i=0 ;i<n;i++){
        if(flag<arr[i])
            flag=arr[i];
    }
    return flag;
}

double sum(double* arr, int n){
    int s=0;
    for(int i=0; i<n; i++){
        s+=arr[i];
    }
    return s;
}

int main(){
    int t,n;
    cin >> t;

    while(t--){
        cin >> n;
        double* a = new double[n];
        int i=n;
        while(i--){
            cin >> a[i];
        }
        cout << fixed <<setprecision(9) <<(max(a,n)*(n-2)+sum(a,n))/(n-1)<<endl;
    }

    return 0;
}