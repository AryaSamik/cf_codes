#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str;
    cin >> str;

    vector<int> index;

    int i=1;
    while(i<str.length()){
        index.push_back(0);
        if(str[i]==str[i-1]){
            index.push_back(i);
        }
        else{
            if(index.size()>1){
                removeChars(str,index);
            }
        }
    }

    return 0;
}