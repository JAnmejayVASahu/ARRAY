#include<iostream>
using namespace std;
int main (){
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int array[size];
    for(int i=0;i<size;i++){
        cin >> array[i];
    }
    int maximum=array[0];
    for(int j=0;j<size;j++){
        cout << array[j] << " ";
        if(array[j]>maximum){
            maximum=array[j];
        }
    }
    cout << "\nThe masximum value is " << maximum;
    return 0;
}
