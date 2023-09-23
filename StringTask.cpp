#include<iostream>
#include<string>

using namespace std;

int main(){
    string str,nstr;
    cin >> str;
    // cout << (char)((int)('A')+32);

    // for(int i=0; i<str.length(); i++){
    //     if(str[i]<='Z' && str[i]>='A'){
            // str[0]=(char)(str[0]+32);
    //     }
    // }

    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i]=(char)((int)str[i]+32);
        }
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
            continue;
        }
        else{
            nstr = nstr + '.' + str[i];
        }
    }
    cout << nstr;

    return 0;
}