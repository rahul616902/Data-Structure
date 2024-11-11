//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a, long long b) {
        
        long long  gcd, lcm;
        
        long long A = a ;
        long long B = b ;
        while(a>0 && b>0){
            
            if(a > b)  a = a % b; // i.e a = a - b
            
            else b = b % a;
        }
         if(a==0) gcd= b;
         else gcd = a;      // dono me se jo sabse pahle 0 hoga to ruk jana hai and other gcd hoga
         
         
         lcm = (A*B)/gcd;
         
         return {lcm, gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;

        cin >> A >> B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends