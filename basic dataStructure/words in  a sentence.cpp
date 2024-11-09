#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	getline(cin, str);
	
	int count = 0;
	
	for(int i=0; i<str.size();i++){
		if(str[i]!=' ')
		count++;
		
		while(str[i]!=' '){
			i++;
			if(i==str.size()) break;
		}
		
	}
	cout<<count;
	
	return 0;
}