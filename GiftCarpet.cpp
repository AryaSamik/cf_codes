#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, ptr, flag;
    cin >> t;
    string name="vika";
    while(t--){
        flag=0;
        cin >> n >> m;
        ptr = 0;
        char l[n][m];
        for(int i =0; i<n; i++){
            for(int j=0; j< m; j++){
                cin >> l[i][j];
            }
        }
        int j=0;
        while(j<m){
            int i=0;
            while(i<n){
                // cout << l[i][j] << " " << name[ptr]<< " " << i << " " << j <<endl;
                if(j>=m){
                    break;
                }
                if(l[i][j]==name[ptr]){
                    ptr++;
                    j++;
                    i=0;
                    // if(j==(m-1)){
                    //     break;
                    // }
                    continue;
                }       
                if(ptr==4){break;}
                i++;         
            }
            j++;
        }
        if(ptr==4){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}