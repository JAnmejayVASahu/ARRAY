/*NOTE:-k can be greater then n as well where n is the n is the size of array*/
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int size=5;
    int k=8;
    k=k%size;
    int ansArray[5];
    int j=0;
    for(int index=size-k;index<size;index++){
        ansArray[j++]=array[index];
    }
    for(int index1=0;index1<=k;index1++){
        ansArray[j++]=array[index1];
    }
    for(int index=0;index<size;index++){
        cout << array[index] <<" ";
    }
    cout << endl;
    return 0;
}
