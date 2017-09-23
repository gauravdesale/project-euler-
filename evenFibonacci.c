#include <stdio.h>
#include <vector>
int fibonacci(){
	vector<int> fibo;
	fibo[0] = 1;
	fibo[2] = 2;
	for(int i=0; i<fibo.size(); ++i)
		printf("%d\n", fibo[1]);
	return 0;
}
