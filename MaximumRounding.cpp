#include<bits/stdc++.h>
using namespace std;

bool checkfor4(char ch){
    if((int)ch-48 == 4){return true;}
    else{return false;}
}

int main(){
    int t, size;
    string n;
    cin >> t;
    while(t--){
        cin>>n;
        size = n.size();
        int i=0;
        for(i=0; i<size; i++){
            if(((int)n[i]-48) >= 5){
                break;
            }
        }
        // cout << i<<endl;
        if(i==0){
            cout << '1';
            for(int j=0;j<size;j++){
                cout << '0';
            }
            cout << endl;
        }
        else if(i==size){
            cout <<n<<endl;
        }
        else{
            int k=i-1;
            while(k>=0){
                if(!checkfor4(n[k])){
                    for(int j=0; j<k;j++){
                        cout << n[j];
                    }
                    cout << (int)n[k]-48+1;
                    for(int j=k+1;j<size;j++){
                        cout << '0';
                    }
                    cout << endl;
                    break;
                }
                else{
                    if(k==0){
                        cout << '1';
                        for(int j=0;j<size;j++){
                            cout << '0';
                        }
                        cout<<endl;
                        break;
                    }
                    else{
                        k--;
                    }
                }
            }
        }
    }
    return 0;
}