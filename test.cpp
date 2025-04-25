#include<bits/stdc++.h>
using namespace std;

vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == key) ans.push_back(i);
        }

        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<endl;
        // }

        set <int> res;
        for(int j=0; j<ans.size(); j++){
            for(int i=0;i<nums.size();i++){
                if((abs(i-ans[j]))<=k) {
                    // cout<<abs(i-ans[j])<<" ";
                    res.insert(i);
                    // cout<<i<<endl;
                }
            }
        }

        vector<int> result(res.begin(), res.end());

        return result;
    }

int main(){
    vector<int> nums {3,4,9,1,3,9,5};
    // cout<<"hiii";
    findKDistantIndices(nums, 9,1);
    return 0;
}