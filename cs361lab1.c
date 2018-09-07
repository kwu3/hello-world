#include <stdio.h>

void example(){
	static int x =2;
	x=x+1;
	printf("x = %d ", x);
}


int main(){
	example();
	example();
	example();
	example();
	example();
	
}
