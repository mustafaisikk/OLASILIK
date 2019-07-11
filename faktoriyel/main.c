#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	
	printf("N: ");
	scanf("%d",&a);
	printf("r: ");
	scanf("%d",&b);
	
	
	printf("Permitasyon: %d\n",faktoriel(a)/faktoriel(a-b));
	printf("Kombinasyon: %d",faktoriel(a)/(faktoriel(a-b)*faktoriel(b)));
	
	getchar();
	getchar();
	return 0;
}

int faktoriel(int a){
	int i,sayac=1;
	
	for(i=1;i<=a;i++){
		sayac*=i;
	}
	
	return sayac;
	
}
