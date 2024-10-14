//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       stack<int>st;
       vector<int>ans(n);
       
       for(int i=n-1; i>=0; i--){
           
           while(!st.empty() && arr[i]>arr[st.top()]){
               
               ans[st.top()] = st.top() - i;
               st.pop();
           }
           st.push(i);
       }
       
       while(!st.empty()){
           ans[st.top()] = st.top()+1;
           st.pop();
       }
       return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends