#include<iostream>
#include<string>
using namespace std;

bool isLucky(string str){
    for(int i=0; i < str.length(); i++){
        if(str[i] != '4' && str[i] != '7'){
            return false;
        }
    }
    return true;
}

int main(){
    string num;
    cin >> num;

    bool flag = isLucky(num);
    

    if(flag){
        cout << "YES";
    }
    else{
        for(int i = 0; i < stoi(num); i++){
            if(isLucky(to_string(i))){
                if(stoi(num)%i == 0){
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }

    return 0;
}