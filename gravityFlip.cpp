#include<iostream>
using namespace std;

void sort(int* arr, int size){
    for(int i=0; i<size; i++){
        int min=i;
        for(int j=i+1; j<size; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main(){
    int noc;
    cin >> noc;
    int* eic = new int[noc];
    for(int i=0; i<noc; i++){
        cin >> eic[i];
    }

    sort(eic,noc);

    for(int i=0; i<noc; i++){
        cout << eic[i]<< " ";
    }

    return 0;
}