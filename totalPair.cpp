#include<iostream>
using namespace std;
int main(){
    int size;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int array[size];
    cout << "Enter the element of an array: ";
    for(int index=0;index<size;index++){
        cin >> array[index];
    }
    int targetSum;
    cout <<"Enter the target of sum: ";
    cin >> targetSum;
    for(int index=0;index<size;index++){
        for(int pair=index+1;pair<size;pair++){
            if(array[index]+array[pair]==targetSum){
                cout <<"(" <<array[index] << "," << array[pair] <<")"<<", ";
            }
        }
    }
    return 0;
}
