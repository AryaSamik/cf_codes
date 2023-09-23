#include<iostream>
#include<string>

using namespace std;

int main(){
    string hello = "hello";
    string newhello = "";
    int index = 0;
    string str;

    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(hello[index] == str[i]){
            newhello.push_back(str[i]);
            index++;
        }
        if(newhello == hello){
            break;
        }
    }

    // cout << newhello;
    if(newhello == hello){
        cout << "YES";
    }
    else{
        cout  << "NO";
    }


    return 0;
}