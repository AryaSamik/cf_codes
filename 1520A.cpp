#include<bits/stdc++.h>
using namespace std;

bool charInV(char ch, vector<char> v){
    // cout<< "HI";
    for(int i=0; i<v.size(); i++){
        if(v[i]==ch){
            return true;
        }
    }
    return false;
}

int main(){
    string str;
    cin >> str;
    vector<char> ch;
    int flag=0;
    for(int i=0; i<str.size(); i++){
        if(i == str.size()-1){
            if(charInV(str[i],ch)){
                flag=1;
                break;
            }
        }
        if(str[i]==str[i+1]){
            continue;
        }
        else{
            if(charInV(str[i],ch)){
                flag=1;
                break;
            }
            ch.push_back(str[i]);
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}