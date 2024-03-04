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
    for(int index=0;index<size;index++){
        for(int i=index+1;i<size;i++){
            if(array[index]==array[i]){
                array[index]=array[i]=-1;
            }
        }
    }
    int unique;
    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout <<"The unique number is " << array[i] << endl;
        }
    }
    return 0;
} 
