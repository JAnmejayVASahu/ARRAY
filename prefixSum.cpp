#include<bits/stdc++.h>
using namespace std;
void runningSum(vector<int> &v){
    for(int k=1; k<v.size(); k++){
        v[k] = v[k-1] + v[k]; 
    }
}
int main(){
    vector <int> v = {1,2,3,5,8};
    runningSum(v);
    for(int j = 0; j < v.size(); j++){
        cout << v[j] <<" ";
    }
    return 0;
}
