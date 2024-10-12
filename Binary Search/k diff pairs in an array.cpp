class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        set<pair<int,int>>ans;   // it will remove the duplicate pairs difference k
        sort(nums.begin() , nums.end());

        int i=0 , j=1;
        while(j<nums.size()){

            int diff = nums[j] - nums[i];

            if(diff == k){
                ans.insert({nums[i] , nums[j]});
                i++ , j++;
            }else if(diff > k){
             // means we have to make the gap differenec smaller
             i++;
            }else{
                j++;
            }  
            if(i==j) j++;
        }

        return ans.size();
    }
};