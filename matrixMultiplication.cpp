#include<iostream>
using namespace std;
int main(){
    int row1=2,column1=2;
    int array1[row1][column1]={
                                {1,2},
                                {3,4}
                            };
    int row2=2,column2=2;
    int array2[row2][column2]={
                                {5,6},
                                {7,8}
                            };
    int array3[column1][row2];
    if(column1==row2){
        for(int i=0; i<row1; i++){
            for(int j=0; j<column2; j++){
                int value=0;
                for(int k=0; k<column1; k++){
                    value+=array1[i][k]*array2[k][j];
                }
                array3[i][j]=value;
            }
        }
    }
    for(int i=0; i<row1; i++){
        for(int j=0; j<column2; j++){
            cout << array3[i][j] << "   ";
        }
        cout << endl;
    }
 return 0;   
}
