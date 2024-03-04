#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int array[size];
    for(int index=0;index<size;index++){
        cin >> array[index];
    }
    bool shortedArray=true;
    for(int index=0;index<size;index++){
        if(array[index]<array[index-1]){
            shortedArray=false;
        }
    }
    cout << shortedArray;
    return 0;
}
