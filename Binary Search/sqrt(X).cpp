class Solution {
public:
    int mySqrt(int x) {
        
        int ans , start = 0 , end = x;   // we intialise a range starting from 0 to the no whose sqrt to be find    
        if(x<2)  return x;   // if x-> is 0, 1 then mid will be x and mid = 0/2 will be 0 so need to handle.
        while(start<=end){

            int mid = start+(end-start)/2;

            if(mid == x/mid){
                ans = mid ; 
                break;
            }else if(mid < x/mid){
                // it meas mid can be answer but we are not sure and find next 
                ans = mid;
                start = mid + 1 ;

            }else{
                end = mid - 1 ;
            }
        }
        return ans;
    }
};