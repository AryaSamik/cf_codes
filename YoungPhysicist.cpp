#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> forces;
    int n;
    cin >> n;
    vector<int> force;
    int coor;

    for(int i=0; i<n; i++){
        cin >> coor;
        force.push_back(coor);
        cin >> coor;
        force.push_back(coor);
        cin >> coor;
        force.push_back(coor);

        forces.push_back(force);

        force.clear();
    }
    
    int x=0, y=0, z=0;
    for(int i=0; i<n; i++){
        x+=forces[i][0];
        y+=forces[i][1];
        z+=forces[i][2];
    }

    if(x==0 && y==0 && z==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}