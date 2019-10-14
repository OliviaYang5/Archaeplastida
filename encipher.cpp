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

		
		
	for(int i=1; i<strlen(a); i++)
	{
		bool cap=check(a[i],64,91);
		int k=i%n;
		int test2=a[i]+(k%26);
		if(check(a[i],64,91)==1||check(a[i],96,123)==1)
		{
			if((cap==1&&check(test2,64,91))||(cap==0&&check(test2,96,123))) {
				a[i]=a[i]+(k%26);
			}
			if((cap==1&&test2<64)||(cap==0&&test2<96)){
				a[i]=test2+26;
			}
			if((cap==1&&test2>90)||(cap==0&&test2>122)){
				a[i]=test2-26;
			}
		}
	}
	
	int j=n%26;
	int test2=a[0]+j;
	bool cap=check(a[0],64,91);

	if(check(a[0],64,91)==1||check(a[0],96,123)==1)
	{
		if((cap==1&&check(test2,64,91))||(cap==0&&check(test2,96,123))) { //DETERMINING a[0]
		a[0]=test2;
		}
		if((cap==1&&test2<64)||(cap==0&&test2<96)){
			a[0]=test2+26;
		}
		if((cap==1&&test2>90)||(cap==0&&test2>122)){
			a[0]=test2-26;
		}
		puts (a);
	}
	else
		goto mido;
	goto mido;
}
