#include<bits./stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& arr, int k) {
      
    int time = 0;
    int target = arr[k];
    // step 1 
    for(int i=0; i<arr.size();i++){
     while(target!=0){

         arr[i]-=1;
        time+=1;
        if(arr[i]!=0){
          int front = arr[i];
          arr.erase(arr.begin());
          arr.push_back(arr.front());
        }
     }
    }
    return time;
 }
int main(){
    vector<int>arr{2,3,2};
    int k=0;
    int ans = timeRequiredToBuy(arr,k);
    cout<<ans<<endl;
}