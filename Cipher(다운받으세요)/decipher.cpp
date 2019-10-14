#include <stdio.h>
#include <string.h>

char a[1010];

bool check(int a, int b, int c){
	if (a>b&&a<c)
		return true;
	else
		return false;
}

int main()
{
	int n;
	printf("Input the key:");
	scanf ("%d", &n);
	
	mido: //starting of loop for one n
		
	fgets (a, sizeof(a), stdin);
	a[strlen(a)-1] = '\0';
	
	
	
	int j=n%26;
	
	if(a[0]-j>64||a[0]-j>123)
		a[0]=a[0]-j;
	else
		a[0]=a[0]-j+26;

	
	for(int i=1; i<strlen(a); i++)
	{
		int k=i%n;
		int test1=a[i]-k;
		int test2=a[i]-k%26;
		if(check(a[i],64,91)==1||check(a[i],96,123)==1)
		{
			if (check(test1, 64, 91)||check(test1, 96, 123))
				a[i]=test1;
			if(check(test2, 64, 91)||check(test2, 96, 123)) 
				a[i]=test2;
			else
				a[i]=test2+26;
		}
	}

	if(check(a[0],64,91)==1||check(a[0],96,123)==1){
		puts (a);
	}
	else
		goto mido;
	
	goto mido;
}
