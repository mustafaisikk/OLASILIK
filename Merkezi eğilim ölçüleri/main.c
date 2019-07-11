#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int n,gecici,i,j,gecici2,sayac=0,a,b=1,sayac2=1;
		float t,k,m,sayac3=0;
		double s;
		
		printf("Dizinin boyutunu giriniz: ");
		scanf("%d",&n);
		
		int dizi[n],dizi2[n];
			
		for(i=0;i<n;i++){
		printf("%d.degeri giriniz: ",(i+1));
		scanf("%d",&gecici);
		dizi[i]=gecici;
		sayac+=gecici;
		sayac2*=gecici;
		sayac3+=1/(double)gecici;
	}
	
		printf("\n\n");
	for(i=0;i<n;i++)
	printf("%d  ",dizi[i]);
	
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(dizi[i]<dizi[j])
			{
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
		
	}
	

	printf("\n");
	for(i=0;i<n;i++)
	printf("%d  ",dizi[i]);

	
	
	printf("\n\n");

	
		printf("1-) DÝZÝNÝN ARÝTMETÝK ORTALAMASINI BULMAK ÝCÝN SECÝNÝZ.\n");
		printf("2-) DÝZÝNÝN MEDYANINI BULMAK ÝCÝN SECÝNÝZ.\n");
		printf("3-) DÝZÝNÝN MODUNU BULMAK ÝÇÝN SECÝNÝZ.\n");
		printf("4-) DÝZÝNÝN GEOMETRÝK ORTALAMASINI BULMAK ÝCÝN SECÝNÝZ. \n");
		printf("5-) DÝZÝNÝN HARMONÝK ORTALAMASINI BULMAK ÝÇÝN SEÇÝNÝZ.\n");
		printf("6-) CIKIS YAPMAK ÝCÝN SECÝNÝZ.");

	while(b){
		printf("\n\n");
		printf("SECÝMÝNÝZ: ");
		scanf("	%d",&a);
			switch(a)
			{
				case 1:
					printf("dizinin aritmetik ortalamasi: %d \n\n",(sayac/n));
					break;
					
				case 2:
					if((n%2)==0)
					{
					t=(float)(dizi[n/2]+dizi[(n/2)-1])/2;
					printf("dizinin medyani: %.3f",t);
					}
	
					else
						printf("dizinin medyani: %d",dizi[n/2]);
					break;
					
					case 3:
					for(i=0;i<n;i++){
						dizi2[i]=0;
						gecici=i;
						while(dizi[i]==dizi[i+1]){
							dizi2[gecici]+=1;
							i++;
						}
						i=gecici;
					}
							gecici=dizi2[0];
						
						for(i=0;i<n;i++){
							if(dizi2[i]>gecici){
								gecici=dizi2[i];
							}
						}
						printf("Dizinin modu: ");
						for(i=0;i<n;i++){
							if(dizi2[i]==gecici){
								printf("%d ",dizi[i]);
							}
						}
						
						break;
						
						case 4:
							printf("Dizinin geometrik ortalamasi: %lf",pow((double)sayac2,1/(double)n));
						break;
						case 5:
						k=(double)sayac3;
						m=(double)n;
						s=n/sayac3;
						
						printf("DÝZÝNÝN HARMONÝK ORTALAMASI: %lf",s);
						break;
						case 6:
						b=0;
						break;	
				
			}
	}
	

		printf("\n\n");
		printf("CIKIS YAPTINIZ...");

	getchar();
	getchar();
	return 0;
}
