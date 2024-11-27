class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int>mp;

        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }
       bool flag = false;
       for(auto i:mp){
            if(i.second>=2) flag =true;
       }
        return flag;   // we can return directly true or false anyway----- without using flag
    }
};