#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5,6};
    cout<<"Enter x:";
    int x;
    cin>>x;
    for(int i=0; i<v.size(); i++){
        if(v[i] > x){
            cout << v[i] << " ";
        }
    }
    return 0;
}
