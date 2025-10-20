#include <stdio.h>
#include "mylib.h"
// Armstrong number
int isArmstrong(int num) {
    int t,r, c = 0, s = 0;
	t = num;
	while (t > 0) {
		c++;
		t/= 10;
    }
	t = num;
	while (t > 0) {	
		r = t % 10;
		int p = 1;
		for (int i = 0; i < c; i++){
			p *= r;
		}
		s += p;
		t/= 10;
}
	return (s == num);
}
// Reverse the digits
int reverseDigits(int num) {
    int r,rev = 0;
    while (num > 0) {
    	r=num%10;
        rev = rev * 10+r;
        num = num /10;
    }
    return rev;
}

// Adams number
int isAdams(int num) {
    int sq,rev,r_sq,r_sq2;
	sq=num*num;
	rev=reverseDigits(num);
	r_sq=rev*rev;
	r_sq2=reverseDigits(r_sq);
	return(sq==r_sq2);
}

// Prime number
int isPrime(int num){
	if (num <= 1){
		return 0;
    }
	for (int i = 2; i <= num / 2; i++) {
		if (num% i == 0){		
			return 0;
		}
    }  
	return 1;
}
// Prime palindrome
int isPrimePalindrome(int num) {
	if (isPrime(num) && num ==reverseDigits(num)){
		return 1;
	}
	else{
		return 0;
	}
}
