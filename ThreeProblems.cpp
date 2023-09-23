#include<iostream>
#include<vector>
using namespace std;

int max(vector<int> v){
    int mi=0;
    for (int i = 0; i < v.size(); i++){
        if(v[i]>v[mi]){
            mi=i;
        }
    }
    return mi;
}

int main(){
    int n;                 //no of problems
    vector<int> v;         //order of problems
    vector<int> index;     //answer
    int x;

    cin >> n;

    if(n>=3){
        for(int i=0; i<n; i++){
            cin >> x;
            v.push_back(x);
        }
        int maxindex = max(v);
        cout<<maxindex<<endl;
        index.push_back(maxindex);
        int i=0;
        while(i<n){
            if(v[maxindex] > v[i] && v[i] < index[index.size()-1]){
                cout << v[maxindex] << " " << v[i] <<endl;
                cout<<i<<endl;
                index.push_back(i);
                i=-1;
            }
            if(index.size()==3){
                break;
            }
            i++;
        }
        if(index.size()<3){
            cout<<"-1 -1 -1";
        }
        else{
            for(int i=0;i<3; i++){
                cout<<index[i]+1<< " ";
            }
        }
    }
    else{
        cout<<"-1 -1 -1";
    }

    return 0;
}