#include <stdio.h>



unsigned int count(unsigned int i) {
 unsigned int ret=1;
 while (i/=10) ret++;
 return ret;
}

int[] splitDigits(int dig){
	while (dig--) {
	 arr[dig]=num%10;
	 num/=10;
	 return arr[dig];
	}


int palindrome(){
	int num = 0;
	int num2 = count(temp);
	int k = 0;
	for(int i = 900; i < 1000; i++){
		for(int j = 900; i < 1000; j+++){
			temp = i*j;
			int newarr[num2];//need to fix this ghetto line
			//lets just assume the code works now
			for(k = 0; k < num2/2){
				if(newarr[i] == newarr[num2 - i])
					k++;
				else
					break;
			}
		}
	}
	if(k > num2/2){
		printf("%d", temp);
	}
	else 
		printf("this is not a palindrome");

	return temp;
}
	
