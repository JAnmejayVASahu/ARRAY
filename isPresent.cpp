/*NOTE:-Value of all the elements in the array is less than 10 to the power 5.*/
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,5,6,4,8,9,7,11};
    int size=10;
    int quaries;
    cout << "Enter the quaries number: ";
    cin >> quaries;
    for(int index=0; index<size; index++){
        if(array[index]==quaries){
            cout <<"Thank you, Your quaries number is present here.";
        }
        else{
            cout <<"Sorry, Your quaries number is not present here.";
        }
    }
    return 0; // see again
}
