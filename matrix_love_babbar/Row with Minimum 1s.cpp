//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        int count = 0;
        int ans =-1;
        
        int minCount = INT_MAX; 
        
        for(int i=0; i<n;i++){
            
            int count = 0;
            
            for(int j=0; j<m;j++){
                
                if(mat[i][j] == 1){
                    count++;
                }
            }
            
            if(count<minCount){
                minCount = count;
                ans = i +1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> mat(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(mat) << "\n";
        cout << "~\n";
    }
}
// } Driver Code Ends