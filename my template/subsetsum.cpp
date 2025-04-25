#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void subsetsum(int arr[], int index , int n, vector<vector<int>>&ans , vector<int>&temp){
     // base case
     if(index ==n){
        ans.push_back(temp);
        return;
     }
     // step 1// not included
     subsetsum(arr,index+1, n, ans,temp);

     // included
     temp.push_back(arr[index]);
     subsetsum(arr,index+1,n, ans, temp);
     temp.pop_back();
 }
int main(){

    // i have to create a subset sum
    // step 1 : create all subsequences of the given array 
    // step 2 . store all of them in to 2D vector and find the total sum of all the subset
    int arr[] = {1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    int n= sizeof(arr)/sizeof(arr[0]);
    subsetsum(arr,0, n, ans,temp);

    // printing the answer ans taking the total sum
    int totalSum =0;
    for (int i = 0; i < ans.size(); i++) {
        int subsetSum = 0;
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
            subsetSum += ans[i][j];
        }
        totalSum += subsetSum;
        cout << "(Sum: " << subsetSum << ")" << endl;
    }

    cout << "Total sum of all subsets: " << totalSum << endl;
    return 0;
}