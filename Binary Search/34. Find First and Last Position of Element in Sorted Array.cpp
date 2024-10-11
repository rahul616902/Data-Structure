class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start = 0 , end = nums.size()-1 , first = -1 , last = -1 , mid;

       
        while(start<=end){

              mid = start+(end-start)/2;

            if(nums[mid]==target){
                // ans ko store karo and check left is there any target element
                first = mid;
                end = mid - 1;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                end = mid - 1;
            }
        }
        
        // checking for last index of the target
         start=0, end = nums.size()-1;
           
           while(start<=end){
            
            mid = start+(end-start)/2;

            if(nums[mid]==target){ 
            last = mid ;
            start = mid+1;
            }

            else if(nums[mid]<target){
                start = mid +1;
            }else{
                  end = mid-1;
            }
           
           }
          vector<int>a(2);    // we can directly return{first,last};
          a[0]=first;
          a[1]=last;
          return a;
    }
};
