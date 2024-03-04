#include<iostream>
using namespace std;
int main(){
    int size;
    cout <<"Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << "enter the element of the size: ";
    for(int index=0;index<size;index++){
        cin >> array[index];
    }
    int max=array[0];
    int index=-1;
    for(int i=0;i<size;i++){
        if(max<array[i]){
            max=array[i];
            index=i;
        }
    }
    array[index]=0;
    int secondlaegest=0;
    for(int i=0;i<size;i++){
        if(secondlaegest < array[i]){
            secondlaegest=array[i];
        }
    }
    cout << "The second largest is " <<secondlaegest;
    return 0;
}
