class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start = 0 , end = nums.size()-1, mid , ans= nums.size();         // here ans is intialised with size of array means if the desired target is not present in the array then it will be considered to be at the positon when the array ends
        
        while(start<=end){
            mid = start+(end-start)/2;

            if(nums[mid]==target){
                ans = mid;
                break;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
    }
};
