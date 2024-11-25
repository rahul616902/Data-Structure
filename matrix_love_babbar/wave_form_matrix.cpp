#include<iostream>
using namespace std;
int main(){

    int row, col;
    cin >> row >> col;
    int arr[row][col];

    // Input the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Wave form conversion
    for (int j = 0; j < col; j++) {
        if (j % 2 == 0) {
            // Even column -> traverse top to bottom
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // Odd column -> traverse bottom to top
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
