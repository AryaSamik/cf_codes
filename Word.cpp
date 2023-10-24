#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int l=0, u=0;
    for(int i = 0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){l++;}
        if(str[i]>='A' && str[i]<='Z'){u++;}
    }
    if(l >= u){
        for(int  i = 0; i < str.length(); i++)
        {
            if(str[i]>='A' && str[i]<='Z'){cout << (char)(str[i]+32);}
            else{cout << str[i];}
        }
        cout <<endl;
        
    }
    else{
        for(int  i = 0; i < str.length(); i++)
        {
            if(str[i]>='a' && str[i]<='z'){cout << (char)(str[i]-32);}
            else{cout << str[i];}
        }
        cout << endl;
    }
    return 0;
}