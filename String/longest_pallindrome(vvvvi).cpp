class Solution {
public:
    int longestPalindrome(string s) {

        vector<int>upper(26,0) , lower(26,0);

        for(int i=0; i<s.size();i++){
            
            if(s[i] >= 'a'){
                lower[s[i] - 'a']++; // us index pe jakar +1 increment kar do
            }
            else{
                upper[s[i] - 'A']++;
            }
        }

        // Now we will traverse through each index to check the occurence of odd or even
        int count = 0;
        bool odd = 0;  // it is for if there is any odd then in final ans 1 will be added
        for(int i=0; i<26; i++){
            // for lower case
            if(lower[i] % 2==0){
                count += lower[i];   // if number occur even times 
            }else{
                // means number occur odd times
                count += lower[i] - 1; // it is subtracted to make even
                odd = 1;
            }

            // for upper case
            if(upper[i] % 2==0){
                count += upper[i];
            }else{
                count += upper[i] - 1; // occur odd times 
                odd = 1;
            }
        }

        return count + odd;  // in ans 1 is added in case of odd no found
    }
};