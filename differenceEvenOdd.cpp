#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << "Enter the element of an array: ";
    for(int index=0;index<size;index++){
        cin >> array[index];
    }
    int sum=0;
    for(int index=0;index<size;index++){
        if(index%2==0){
            sum += index;
        }
        else{
            sum -= index; 
        }
    }
    cout << "The sum is "<<sum;
    return 0;
}
