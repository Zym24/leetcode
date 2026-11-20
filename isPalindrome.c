/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x);

bool isPalindrome(int x) {
	if(x<0){
		return false;
	}
	int copia=x;
	int cont=0;
	int j[15];
	//inizializzo tutto a 0 j
	for(int i=0;i<15;i++){
		j[i]=0;
	}
	while(copia!=0){
		int primaCifra=copia%10; 
		j[cont++]=primaCifra;      
		copia=copia-primaCifra;  
		copia=copia/10;			
	}
	int k=0;
	while(k<cont){
		if(j[k]!=j[cont-1]){
			return false;
		}
		k++;
		cont--;
	}
	
	return true;
}
