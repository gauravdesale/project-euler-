#include<stdio.h>
#include<vector>
int maxPrime(int);
int main(){
	long result = maxPrime(10001);
	printf("%d\n", result);
	return 0;
}
int maxPrime(int a){
	vector <int> primes;
	for (int i = 0; i <= a; i++){
		if (!(i%2==0) && !(i%3==0) && !(i%5==0) && !(i%7==0)){
			primes.push.back(i);
		}
	}
	int result = primes[primes.length-1];
	return result;
}
