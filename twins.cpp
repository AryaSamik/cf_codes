#include<iostream>
using namespace std;

void invert_sort(int* arr, int size){
    int max=0;
    for(int i=0; i<size; i++){
        max=i;
        for(int j=i+1; j<size; j++){
            if(arr[max]<arr[j]){
                max=j;
            }
        }
        swap(arr[max], arr[i]);
    }
}

int sum (int* arr, int index, int size){
    int s=0;
    // cout<< "*"<<sizeof(arr)/sizeof(arr[0])<<endl;
    for(int i=index; i<size; i++){
        s+=arr[i];
    }
    // cout<< s<<endl;
    return s;
}

int main(){
    int n;
    cin >> n;
    int* coins = new int[n];
    for(int i=0; i<n; i++){
        cin >> coins[i];
    }
    invert_sort(coins,n);

    // for(int i=0; i<n; i++){
    //     cout << coins[i]<< endl;
    // }
    // cout<< sizeof(coins)<<endl;
    // cout << (coins+1)<<endl;
    // int* arr= coins+1;
    // cout<< arr[0]+arr[1] << endl;

    int mycoins=0, myamt=0;
    for(int i=0; i<n; i++){
        if(myamt <= sum(coins, i, n)){
            myamt += coins[i];
            mycoins++;
            // cout << myamt<< " ";
            // cout << mycoins <<endl;
        }
        else{
            break;
        }
    }
    cout << mycoins;


    return 0;
}