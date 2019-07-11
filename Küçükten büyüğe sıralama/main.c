#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int diziboy,i,gecici,k,j;
	
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&diziboy);
	
	int dizi[diziboy];

	for(i=0;i<diziboy;i++){
		printf("%d.Sayiyi giriniz: ",(i+1));
		scanf("%d",&k);
		dizi[i]=k;
	}
	
		for(i=0;i<diziboy;i++)
	printf("%d  ",dizi[i]);
	
	printf("\n\n\n");
	
	for(i=0;i<diziboy;i++)
	{
		for(j=0;j<i;j++){
			if(dizi[i]<dizi[j]){
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
	}
	for(i=0;i<diziboy;i++)
	printf("%d  ",dizi[i]);
	
	getchar();
	
	getchar();
	return 0;
}
