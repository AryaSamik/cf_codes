#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    int res=0;
    while(n--){
        cin >> str;
        if(str=="X++" || str=="++X"){
            res++;
        }
        if(str == "X--" || str == "--X"){
            res--;
        }
    }
    cout << res<< endl;
    return 0;
}
