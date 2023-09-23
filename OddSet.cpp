#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,ec=0,oc=0;
    cin >> t;
    
    while(t--){
        cin >> n;
        int* arr = new int[2*n];
        for(int i=0; i<2*n; i++){
            cin >> arr[i];
            if(arr[i]%2==0){
                ec++;
            }
            else{
                oc++;
            }
        }
        delete arr;
        
        if(ec==oc && ec==n){
            cout << "Yes"<<endl;
        }
        else{
            cout << "No"<<endl;
        }

        ec=0, oc=0;
    }
    
    return 0;
}