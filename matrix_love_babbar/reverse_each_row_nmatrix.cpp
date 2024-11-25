#include<iostream>
using namespace std;
int main(){

    int arr[3][3] = {{2,3,4} , {1,2,6} , {4,9,3}};
    int row = 3;
    int col = 3;
    for(int i=0; i<row; i++){
        
        int start = 0 , end = col-1;
        while(start<end){

            swap(arr[i][start] , arr[i][end]);

            start++ , end--;

        }
    }

    for(int i=0; i<row; i++){

        for(int j=0; j<col ; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
      return 0;
}