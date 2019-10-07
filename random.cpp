#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));
	int random=rand();
	printf("%d", random);
}
