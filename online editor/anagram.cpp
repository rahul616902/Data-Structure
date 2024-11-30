//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        
        map<char, int>mp1;
        map<char, int>mp2;
        
        for(int i=0; i<s1.size();i++){
            
            mp1[s1[i]]++;
        }
        
        for(int i=0; i<s2.size();i++){
            
            mp2[s2[i]]++;
        }
        
        if(mp1.size()!=mp2.size()) return false;
        
       for(auto it1=mp1.begin(), it2=mp2.begin() ; it1!=mp1.end(), it2!=mp2.end(); it1++, it2++){
           if(it1->first != it2->first || it1->second!=it2->second) return false;
       }
       
       return true;
        
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends