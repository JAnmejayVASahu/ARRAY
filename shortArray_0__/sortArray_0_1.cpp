#include<iostream>
using namespace std;
int main(){
    int size=7;
    int array[size]={0,1,0,1,1,0,0};
    int count=0;
    for(int index=0; index<size; index++){
        if(array[index]==0){
            count = count+1;
        }
    }
    cout << count <<" zero's are present here."<< endl;
    for(int sort=0; sort<size; sort++){
        if(array[sort]<count){
            array[sort]=0;
        }
        else{
            array[sort]=1;
        }
        cout <<array[sort] <<" ";
    }
    return 0;
}
