#include<bits/stdc++.h>
using namespace std;
 
string replace(string str, int index, char ch){
    string s="";
    for(int i=0; i<str.length();i++){
        if(i==index){
            s+=ch;
            continue;
        }
        s+=str[i];
    }
    return s;
}
 
int main(){
    int t;
    cin >>t;
    int ans;
    string str;
    while(t--){
        cin >> str;
        ans=0;
        int i=0;
        while(i<str.length()){
            if(str[i]=='A' && str[i+1]=='B'){
                str=replace(str,i,'B');
                str=replace(str,i+1,'C');
                i=0;
                ans++;
                continue;
            }
            if(str[i]=='B' && str[i+1]=='A'){
                str=replace(str,i,'C');
                str=replace(str,i+1,'B');
                i=0;
                ans++;
                continue;
            }
            i++;
        }
        cout << ans<<endl;
    }
    return 0;
}