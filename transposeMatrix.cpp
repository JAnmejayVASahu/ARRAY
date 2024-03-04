#include<iostream>
using namespace std;
int main(){
    int row=2, column=3;
    int array[row][column]={
                            {1,2,3},
                            {4,5,6}
    };
    int transposeArray[column][row];
    for(int rowi=0; rowi<column; rowi++){
        for(int columnj=0; columnj<row; columnj++){
            transposeArray[rowi][columnj]=array[columnj][rowi];
        }
    }
    for(int rowi=0; rowi<column; rowi++){
        for(int columnj=0; columnj<row; columnj++){
            cout << transposeArray[rowi][columnj] << " ";
        }
        cout << endl;
    }
    return 0;
}
