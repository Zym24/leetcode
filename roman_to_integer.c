/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Roman to integer


*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <math.h>

int romanToInt(char* s);
int converto(char c);

int main(void){

	int num = romanToInt("III"); // 3
	printf("%d \n", num);
	int num1 = romanToInt("MCMXCIV"); // 1994
	printf("%d \n", num1);
	int num2 = romanToInt("LVIII"); // 58
	printf("%d \n", num2);
	int num3 = romanToInt("DCXXI"); // 621
	printf("%d \n", num3);
	int num4 = romanToInt("CMLII"); // 952
	printf("%d \n", num4);

	return 0;
}

int romanToInt(char* s){
	int len_str=strlen(s);
	int decimali[len_str];
	int tot=0;
	for(int i=0;i<len_str;i++){
		decimali[i]=converto(s[i]);
	}
	for(int i=0;i<len_str;i++){
		if(i+1<len_str && decimali[i]<decimali[i+1]){
			tot=tot-decimali[i];
		}
		else{
			tot=tot+decimali[i];
		}
	}
	printf("[");
	for(int i=0;i<len_str;i=i+1){
		 printf("%2d ",decimali[i]); 
	}
	
	printf("] \n");

	return tot;
}

int converto(char c){
	int numero=0;
	switch(c){
			case 'I' : numero=1;
			break;
			case 'V' : numero=5;
			break;
			case 'X' : numero=10;
			break;
			case 'L' : numero=50;
			break;
			case 'C' : numero=100;
			break;
			case 'D' : numero=500;
			break;
			case 'M' : numero=1000;
			break;
		}
	return numero;
}













