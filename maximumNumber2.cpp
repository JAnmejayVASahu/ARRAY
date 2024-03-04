#include<bits/stdc++.h>
using namespace std;
int leftMostOneRow(vector<vector<int>> &v){
    int leftMostOne = -1;
    int maxOneRow = -1;
    int j = v[0].size()-1;
    // finding leftmost one in 0th row
    // for(int j=v[0].size()-1; j>=0; j--){
    //     if(v[0][j] == 1){
    //         leftMostOne = j;
    //     }
    //     else{
    //         break;
    //     }
    // }
    while(j >= 0 && v[0][j] == 1){
        leftMostOne = j;
        maxOneRow = 0;
        j--;
    }
    // check in rest of the rows if we can find a one left to the leftostOne
    for(int i=1; i<v.size(); i++){
        while(j >= 0 && v[i][j] == 1){
            leftMostOne = j;
            j--;
            maxOneRow = i;
        }
    }
    return 0;
}
int maximumOnesRow(vector<vector<int>> &v){
    int maximOnes = INT_MIN;
    int maxOnesRow = -1;
    int columns = v[0].size();
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size(); j++){
            if(v[i][j] == 1){
                int numberOfOnce = columns - j;
                if(numberOfOnce > maximOnes){
                    maximOnes = numberOfOnce;
                    maxOnesRow = i;
                }
            }
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> >vec(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> vec[i][j];
        }
    }
    int res = maximumOnesRow(vec);
    cout << res << endl;
    return 0;
}
