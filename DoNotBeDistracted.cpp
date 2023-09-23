#include<bits/stdc++.h>
using namespace std;

bool repeatition(vector<char>){
    
}

int main(){
    int t;
    cin>>t;
    string str;
    vector<char> arr;
    int flag=0;
    while(t--){
        cin>>str;
        for(int i=0; i<str.size(); i++){
            if(str[i-1]!=str[i]){
                arr.push_back(str[i]);
            }
        }
        for(int i=0; i<arr.size(); i++){
            cout <<arr[i];
        }
        if(repeatition(arr)){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }

    return 0;
}