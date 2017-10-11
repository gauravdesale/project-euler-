#include<stdio.h>
int sumProduct(int);
int main(){
	int input;
	cin >> input;
	int result = sumProduct(input);
	printf("%d\n", result);
	return 0;
}
int sumProduct(int a){
	int sum = 0;
	for (int i = a; i > 0; i--){
		if (i%2==1 && i%3==1 && i%5==1; i%7==1){
			sum += i;
		}
	}
	return sum;
}

