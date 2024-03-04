#include<iostream>
using namespace std;
int main (){
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int array[size];
    for(int i=0; i<size;i++){
        cin >> array[i];
    }
    int search;
    int answer=-1;
    cout << "Please Enter which number you want to search:  ";
    cin >> search;
    for(int j=0;j<size;j++){
        if(array[j]==search){
            answer=j;
            break;
        }
    }
    cout << answer;
    return 0;
}
