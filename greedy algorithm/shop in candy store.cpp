//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        
        sort(candies , candies+N );
        
        int i = 0 , j=N-1;
        // minimum candies---
        int mini_sum = 0 ,  maxi_sum = 0;
        
        while(i<=j){
            
             mini_sum+=candies[i];
           
            i++ , j-=K;
        }
        
        
        // for maximum candies--
        
        i = 0, j=N-1;
       
        while(i<=j){
            
            maxi_sum +=candies[j];
          
            i+=K , j--;
        }
        
        vector<int>ans;
        ans.push_back(mini_sum);
        ans.push_back(maxi_sum);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends