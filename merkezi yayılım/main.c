#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,k,a,b,gecici,sayac=0;
	double sayac2=0,gecici2,sayac3=0,sayac4=0,sayac5=0;
	
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&a);
	int dizi[a];
	
	for(i=0;i<a;i++)
	{
		scanf("%d",&gecici);
		dizi[i]=gecici;
		sayac+=gecici;
	}
	
	    for(i=0; i<a-1;i++)
	{ 
        for(j=i+1; j<a; j++)
		{
            if(dizi[i] > dizi[j])
			{
                gecici = dizi[i]; 
                dizi[i] = dizi[j]; 
                dizi[j] = gecici; 
            }
        }
	  }
	
	for(i=0;i<a;i++)
	printf("%d ",dizi[i]);
	
	gecici2=(double)sayac/(double)a;
	
	for(i=0;i<a;i++){
		sayac2+=pow((dizi[i]-gecici2),(double)2)/(double)(a-1);	
		sayac4+=pow((dizi[i]-gecici2),(double)3)/(double)(a-1);
		sayac5+=pow((dizi[i]-gecici2),(double)4)/(double)(a-1);
	}
	
	
	printf("\n\n");
	printf("ortalama: %lf\n",gecici2);
	for(i=0;i<a;i++)
	sayac3+=fabs((double)(gecici2-dizi[i]));
	
	for(i=0;i<a;i++){
		
	}
	printf("\n\n");
	
	printf("Dizinin varyansý: %lf \n",sayac2);
	printf("Dizinin standart saplasý: %lf\n",pow(sayac2,1/(double)2));
	printf("Dizinin ortalama mutlak sapmasi: %lf\n",sayac3/(double)a);
	printf("Dizinin Carpikligi: %lf\n",sayac4);
	printf("Dizinin Sivriligi: %lf\n",sayac5);
	printf("Varyasyon Katsayisi (D.K) :%lf",pow(sayac2,1/(double)2)/gecici2);

	getchar();
	getchar();
	
	return 0;
}
	
