class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0){
            return false;
         }
         
         long num = x;
         long sum =0;
         while(x>0){
            
            int digit = x%10;
            sum = sum*10 + digit;
            x/=10;
         }
         return num == sum;
    }
};