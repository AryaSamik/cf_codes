// 1154A -> Restoring 3 numbers
#include<iostream>
using namespace std;

int main(){
    int* givenNumbers=new int[4];
    int maxIndex=0;
    for(int i=0; i<4; i++){
        cin >> givenNumbers[i];
    }
    
    for(int i=1; i<4; i++){
        if(givenNumbers[i]>givenNumbers[maxIndex]){
            maxIndex = i;
        }
    }
    swap(givenNumbers[0],givenNumbers[maxIndex]);

    int* originalNumbers = new int[3];
    for(int i=1; i<4; i++){
        originalNumbers[i-1] = givenNumbers[0]-givenNumbers[i];
        cout << originalNumbers[i-1] << "\t";
    }

    delete(givenNumbers);
    delete(originalNumbers);

    return 0;
}