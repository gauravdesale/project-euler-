#include <stdio.h>
int[] checkForPrimes(int x){
	int primesList[100];
	int m = n/2;
	for(int i = 2; i <= m; i++){
		if(n%i == 0){
			continue;
		}
		else {
			primesList[i] = i;
		}
	}
	return primesList[100];
}
int primeFactor(int n){
	int primes[100];
	int temp = 0;
	for(int i = 0; i <= 100, i++){
		if(primes[i] > temp){
			temp = primes[i]
		}
	}
	printf("%d", temp);
	return temp;
}
int main(){
	primeFactor(600851475143);
	return 0;
}

