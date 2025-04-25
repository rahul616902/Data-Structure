#include<bits/stdc++.h>
using namespace std;
int main(){

    int w;
    cin>>w;
    
    int ans = w%2;
    int re = w/2;
    if(ans==0 && re%2==0){
        cout<<"YES"<<endl;
    } 
    else cout<<"NO"<<endl;
}