//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    bool clockmove(string & s1){
        
        char ch = s1[s1.size()-1];
        
        int i = s1.size()-2;
        
        while(i>=0){
           
            s1[i+1]  = s1[i];
            i--;
        }
        s1[0] = ch;
    }
    
     bool anticlockmove(string & s2){
        
        char ch = s2[0];
        
        int i = 1;
        
        while(i<s2.size()){
           
            s2[i - 1]  = s2[i];
            i++;
        }
        s2[s2.size()-1] = ch;
    }
    
    bool isRotated(string& s1, string& s2) {
      
      if(s1.size() != s2.size()){
          return false;
      }
      
      string clockwise , anticlockwise;
      
      clockwise = s1 , anticlockwise = s1;
      
      clockmove(clockwise);
      clockmove(clockwise);
      
      if(clockwise == s2) 
      return 1;
      
      // agar nhi hai to check karo ki anticlockwise me hai ki nhi--
      
      anticlockmove(anticlockwise);
      anticlockmove(anticlockwise);
      
      if(anticlockwise == s2)
      return 1;
      
      return 0;
      
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends