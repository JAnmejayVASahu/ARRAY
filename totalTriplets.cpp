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
            for(int triplet=pair+1;triplet<size;triplet++){
                if(array[index]+array[pair]+array[triplet]==targetSum){
                    cout <<"(" <<array[index] << "," << array[pair] << ","<< array[triplet] << ")"<<", ";
                }
            }
        }
    }
    return 0;
}
