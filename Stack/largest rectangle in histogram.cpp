class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        vector<int>right(n);
        vector<int>left(n);   // two array to store left smallest and right smallest indexes
        stack<int>st;

        for(int i=0; i<n; i++){

            while(!st.empty() && heights[i] < heights[st.top()]){
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()] = n;   // n=9 for first case to understand
            st.pop();
        }

        // for left smallest no check:
        for(int i= n-1; i>=0; i--){

            while(!st.empty() && heights[i] < heights[st.top()]){
                left[st.top()] = i; 
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty()){
            
            // jo element bach gye unke jagah -1 bhar do 
            left[st.top()] = -1;
            st.pop();
        }

        // Now apply formula for finding maximum area
        int ans = 0; 
        for(int i=0; i<n; i++){

            ans = max(ans, heights[i] * (right[i] - left[i] -1));
            
        }

        return ans;  // maximum area
    }
};