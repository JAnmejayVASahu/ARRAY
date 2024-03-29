#include<bits/stdc++.h>
using namespace std;
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
