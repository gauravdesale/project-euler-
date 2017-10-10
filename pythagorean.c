#include<stdio.h>
int pythagoreamOptimization();
int main(){
	int result[3] = pythagoreanOptimization();
	for (int i = 0; i < sizeof(result); i++){
		printf("%d\n", result[i]);
	}
	return 0;
}
int pythagoreanOptimization(){
	vector<int> maxValues;
	int temp  = 0;
	for (int i = 0; i < 333; i++){
		for (int j = 0; j < 333; j++){
			for (int k = 0; k < 333; k++){
				if (i + j + k == 1000){
					maxValues.push.back(i+j+k);
				}
			}
		}
	}
	for (int i = 0; i < sizeof(maxValues); i++){
		if (maxValues[i] > temp){
			temp = maxValues[i];
		}
	}
	return temp;
}

