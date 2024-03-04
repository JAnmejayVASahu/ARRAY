#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v {1, 2, 3, 4, 1, 3, 1};
    int x;
    cout << "Enter x ";
    cin  >> x;
    int occarance=-1;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            occarance = i;
            break;
        }
    }
    cout << occarance << endl;
    return 0;
}

// using function
#include <bits/stdc++.h>
using namespace std;
int last_occurrence(std::vector<int>& vec, int x) {
    for (int i = vec.size() - 1; i >= 0; i--) {
        if (vec[i] == x) {
            return i;
        }
    }
    return -1; // x not found in vector
}
int main() {
    vector<int> vec {1, 2, 3, 4, 5, 1};
    int x = 3;
    int last_index = last_occurrence(vec, x);
    if (last_index != -1) {
        cout << "Last occurrence of " << x << " is at index " << last_index << std::endl;
    } else {
        cout << x << " not found in vector" << std::endl;
    }
    return 0;
}
