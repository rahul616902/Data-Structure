class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n, -1); // Initialize the result vector with -1

        // Traverse the array twice to simulate the circular nature
        for (int i = 0; i < 2 * n; i++) {
            // We use i % n to get the actual index in the circular array
            while (!st.empty() && nums[i % n] > nums[st.top()]) {
                ans[st.top()] = nums[i % n];
                st.pop();
            }
            // Only push the index if we are in the first round
            if (i < n) {
                st.push(i);
            }
        }

        return ans;
    }
};
