#include<iostream>
using namespace std;

void shiftLeft(string& str, int index, int n){
    for (int i=index+1; i<str.size(); i++){
        str[i-n] = str[i];
    }
    for(int i=0; i<n; i++){
        str.pop_back();
    }
}

void removeSubstr(string s, string& str){
    string temp="";
    int i=0,flag=0;
    while(i<str.size()){
        // temp +=str[i];
        // if(temp == s)
        if(str[i]==s[0]){
            flag=1;
            for(int j=1; j<s.size(); j++){
                if(str[i+1]==s[i]){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            // cout << "hi" <<endl;
            shiftLeft(str, i, s.size());
            temp="";
            i=0;
            continue;
        }
        else{
            temp="";
        }
        flag=0;
        i++;
    }
}

using namespace std;
int main(){
    string str;
    cin >> str;
    cout<<str<<endl;
    removeSubstr("WUB",str);
    // shiftLeft(str, 2, 3);
    cout<<str;
    return 0;
}