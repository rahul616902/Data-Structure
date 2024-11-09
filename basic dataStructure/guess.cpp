#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int d;
	cin>>d; // birth date
	
	int guess;
	
	while(true){
		cin>>guess;  // take a guess until the correct guess is entered.
		
		if (guess == d) {
            cout << "Correct Guess" << endl;
            break; // Exit the loop on correct guess
        } else {
            cout << "Incorrect Guess" << endl;
        }
	}
	
	
	
	
	return 0;
}