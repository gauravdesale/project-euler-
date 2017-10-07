#include<stdio.h>
int sumSquares(int);
int main(){
	int result = sumSquares(1000000);
	printf("%d\n", result);
	return 0;
}
int sumSquares(int num){
	int res1;
	int res2;
	int result;
	for (int i = 0; i < num; i++){
		res1 += i*i;
		res2 += i;
	}
	res2 = res**2;
	int result = res1-res2;
	return result;
}
