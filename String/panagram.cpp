class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        vector<bool>ans(26 , 0);// making a vector having 26 letters, all intialised with 0

        for(int i=0; i<sentence.size();i++){

            int val  = sentence[i] - 'a';

             ans[val] = 1;
        }

        // checking ki ans me agar koi v index pe 0 raha to return 0 else return true;
        for(int i=0; i<26; i++){
            if(ans[i] == 0)
                return false;
        }
         return true;
    }
};