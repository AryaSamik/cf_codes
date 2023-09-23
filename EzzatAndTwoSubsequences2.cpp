#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    double sum=0;
    cin >> t;

    while(t--){
        cin >> n;
        int* arr = new int[n];
    
        for(int i=0; i<n; i++){
            cin >> arr[i];}
            
        sort(&arr[0],&arr[n]);
        sum=arr[n-1];
        
        for(int i=0; i<n-1; i++){
            sum += arr[i]/(double)(n-1);}

        cout << fixed << setprecision(9) << sum << endl;
        delete(arr);
    }

    return 0;
}