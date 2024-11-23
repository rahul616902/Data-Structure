//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& nums) {
        
         int n  =nums.size();
        int gola_index = -1;
        
        for(int i=n-1; i>0; i--){

            if(nums[i]>nums[i-1]){
                gola_index = i-1;
                break;
            }
        }

        if(gola_index != -1){
            // means koi no hai gola index me 
            int swap_index = gola_index;

            for(int j = n-1; j>=gola_index+1 ; j--){
                if(nums[j] > nums[gola_index]){
                    swap_index = j;
                    break;
                }
            }

            swap(nums[swap_index], nums[gola_index]);

        }

        reverse(nums.begin() + gola_index+1 , nums.end());
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends