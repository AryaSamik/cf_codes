#include<iostream>
#include<string>
using namespace std;

bool charIn(string str, char c){
    for(int i=0; i<str.length(); i++){
        if(c == str[i]){
            return true;
        }
    }
    return false;
}

int main(){
    string str;
    getline(cin, str);
    string hello = "";
    string s = "hello";
    int pointer = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'h' || str[i] == 'e' || str[i] == 'l' || str[i] == 'o'){
            cout << hello << endl;
            if(str[i] == 'l' && hello[hello.length()-1] == 'l' && hello[hello.length()-2] != 'l'){
                hello.push_back(str[i]);
                continue;
            }
            if(!(charIn(hello, str[i]))){
                hello.push_back(str[i]);
            }
            // if(hello[hello.length()-1] != str[i]){
            //     hello.push_back(str[i]);
            // }
            
        }
    }
    // pnnepelqomhhheollvlo
    cout << hello<<endl;
    if(hello == "hello"){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}