#include<iostream>
using namespace std;

void sort(int *arr, int size){
    int min;
    for(int i=0; i<size; i++){
        min=i;
        for(int j=i+1; j<size; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main(){
    int m,n;
    cin >> n >> m; 
    int* arr = new int[m];

    for(int i=0; i<m; i++){
        cin >> arr[i];
    }

    sort (arr,m);
    
    int min=arr[0+n-1]-arr[0];
    for(int i=1; i<m-n+1; i++){
        if((arr[i+n-1]-arr[i])<min){
            min=arr[i+n-1]-arr[i];
        }
    }

    cout << min;

    return 0;
 }