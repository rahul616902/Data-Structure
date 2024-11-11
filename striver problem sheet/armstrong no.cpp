#include <bits/stdc++.h> 
bool isArmstrong(int num) {
   
    int number = num;
    int sum = 0;
    int temp = num; // for finding total no to find power
    int numDigits = 0;
    while(temp>0){
          numDigits++;
          temp/=10;
    }

    while(number>0){
        int digit = number%10;
        
        sum+= pow(digit,numDigits);
        number/=10;
    }
    if(sum == num) return true;
    else return false;
}