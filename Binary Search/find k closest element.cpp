class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0 , high = arr.size()-1;

        while(high-low>=k) {

            if(x-arr[low] > arr[high]-x){
                low++;
            }else{
                high--;
            }
        }

        // now return the closest element of the arry between low and high
        vector<int>ans;
        for(int i=low; i<=high ; i++){
            ans.push_back(arr[i]);
        }

        return ans;
    }
};