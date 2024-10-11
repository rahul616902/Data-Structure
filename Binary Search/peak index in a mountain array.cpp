class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // int maxi=INT_MIN , index;
        // for(int i=0; i<arr.size();i++){

        //     if(arr[i]>maxi){
        //         maxi = arr[i] ;
        //         index=i;
        //     }
        // }
        // return index;



        int start = 0 , end = arr.size()-1 , mid ;

        while(start<=end){
            
            mid = end+(start-end)/2;
            // 1st case
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){   // means this can be a peak index 
                  
                  return mid;
            }
            // 2nd case 
            else if(arr[mid] > arr[mid-1]){
                start = mid+1;
            }else{
                end= mid-1;
            }
        }
        return -1;
    }
};