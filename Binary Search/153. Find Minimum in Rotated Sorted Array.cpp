class Solution {
public:
    int findMin(vector<int>& nums) {
        
       int start =0, end= nums.size()-1, mid , ans=nums[0];   // nums[0] is a reasonable starting assumption for the minimum element because in an edge case where the array is not rotated, the first element is the minimum.
       while(start<=end){
        mid = start+(end-start)/2;

        if(nums[0]<=nums[mid]){
            // left side sorted then go right side
            start = mid+1;
        }else{
            // right sorted hai to left jaoo but ans ko store kar lo
            ans =nums[mid];
            end = mid-1;
        }
       }
       return ans;
    }
};