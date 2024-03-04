#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{1, 2, 3, 1, 3, 1};
    cout << "Enter x: ";
    int x;
    cin >> x;
    int occurrences=0;
    for(int ele:v){
        if(ele==x){
            occurrences++;
        }
    }
    cout << occurrences << endl;
    return 0;
}
