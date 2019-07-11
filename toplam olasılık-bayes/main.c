#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	float s1,s2,sonuc,tol=0;	
	int s3,s4,i,secim,secim1;
	
	printf("Kac olasilik var:");
	scanf("%d",&s4);
	float dizi[s4];
	
	printf("\n\n");
	
	for(i=0;i<s4;i++){
	printf("P(A%d) olasiligini giriniz: ",i+1);
	scanf("%f",&s1);
	printf("P(B/A%d) olasiligini giriniz: ",i+1);
	scanf("%f",&s2);
	sonuc=s1*s2;
	dizi[i]=sonuc;
	printf("\n");
	}
	for(i=0;i<s4;i++)
		tol+=dizi[i];
		
	printf("Toplam Olasilik: %lf",tol);
	printf("\n\n");
	
	printf("BAYES HESAPLAMAK ISTER MISINIZ 1(EVET) 0(HAYIR): ");
	scanf("%d",&secim1);
	printf("\n");
	while(secim1==1){
		printf("Hangi olayin BAYES i hesaplansin: ");
		scanf("%d",&secim);
		printf("\n");
		printf("Secilen olayin BAYES degeri: %lf",(dizi[secim-1]/tol));
		printf("\n");
		printf("BAYES HESAPLAMAK ISTER MISINIZ: 1(EVET) 0(HAYIR)");
		scanf("%d",&secim1);
	}
	printf("CIKIS YAPTINIZ...");
	
	getchar();
	getchar();	
	return 0;
}
