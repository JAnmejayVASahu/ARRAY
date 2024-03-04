#include<bits/stdc++.h>
using namespace std;
void rotateArray(vector<vector<int>> &vec){
    // transpose
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<i; j++){
            swap(vec[i][j], vec[j][i]);
        }
    }
    // revers every row
    for(int i=0; i<vec.size(); i++){
        reverse(vec[i].begin(), vec[i].end());
    }
}
int Main(){
    int n;
    cin >> n;
    vector<vector<int>>vec(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> vec[i][j];
        }
    }
    rotateArray(vec);
    for(int i=0; i<n; i++){
        for(int j=0; j,n; j++){
            cout << vec[i][j] << " ";
        }cout << endl;
    }
    return 0;
}
