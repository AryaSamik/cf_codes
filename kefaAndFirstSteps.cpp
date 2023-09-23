#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    int count=1, flag=0;
    
    cin >> arr[0];
    for(int i=1; i<n; i++){
        cin >> arr[i];
        if(arr[i] >= arr[i-1]){
            count++;
        }
        else{
            if(flag<count){
                flag=count;
            }
            count=1;
        }
    }
    if(flag<count){
                flag=count;
            }

        cout << flag;

    return 0;
}