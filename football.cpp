#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    // cout << "Enter the string : ";
    getline(cin, str);

    int count0=0, count1=0;
    for(int i=0; i<str.size(); i++){
        if(count1 == 7 || count0 == 7){
            break;
        }
        if(str[i] == '1'){
            count1++;
            count0 = 0;
        }
        else{
            count0++;
            count1 = 0;
        }
    }
    if(count0 < 7 && count1 < 7){
        cout << "NO";
    }
    else{
        cout << "YES";
    }

    return 0;
}