#include<bits/stdc++.h>
using namespace std;

// #define endl '\n' // endl will be replaced by '\n'
// #define int long long  // int will be replaced by long long 

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// signed main(){

//     ios::sync_with_stdio(false); cin.tie(NULL);

//     int tc ; cin>>tc;

//     while(tc--){

        
//     }
// }

// void Rotate(vector<vector<int>>&matrix , int k, int row, int col){
//      // take transpose 
     
//      for(int i=0; i<row-1;i++){
//         for(int j=i+1; j<col;j++){
//             swap(matrix[i][j] , matrix[j][i]);
//         }
//      }

//      // now rowise swap
//      for(int i=0; i<row;i++){
//          int s=0, e= col-1;
//          while(s<e){
//             swap(matrix[i][s] , matrix[i][e]);
//             s++,e--;
//          }
//      }
// }

// int main(){
    
//     int row, col ;
//     cin>>row>>col;
//     cout<<row<<" "<<col;
//     vector<vector<int>> matrix(row, vector<int>(col));
//     for(int i=0; i<row; i++){
        
//         for(int j=0; j<col;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     int k;
//     cin>>k;
//     k=k%4; // kyonki 1 bar me 0 se --> 90 deg, 2->180deg , 3->270deg , 4-->0 degre(same as before ) , 5th - 90 , 6th-> 180
//     while(k--){
//         Rotate(matrix,k,row,col);
//     }

//     // printing the matrix
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
