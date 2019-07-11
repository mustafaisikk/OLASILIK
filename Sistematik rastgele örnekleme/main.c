#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y,k,t,i;
	
	printf("N giriniz: ");
	scanf("%d",&x);
	printf("n sayisini giriniz: ");
	scanf("%d",&y);
	
	k=x/y;
	
	t=1+(rand()%(k-1));
	
	for(i=0;i<y;i++){
		
		printf("%d\n",t);
		t+=k;
	}
	
	getchar();
	getchar();
	return 0;
}
