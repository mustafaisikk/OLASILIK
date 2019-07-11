#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main() {
	
	int min,max,adet,random,i,j,a,b,gecici=0;
	
	printf("Minumum degeri giriniz:");
	scanf("%d",&min);
	printf("Maximum degeri giriniz:");
	scanf("%d",&max);
	printf("Kac adet sayi uretilsin:");
	scanf("%d",&adet);
	srand(time(NULL)); 
	
	int d[adet];
	
	if(adet<=(max-min)){
		for(i=0;i<adet;i++)
		{
			e:
		random=min+(rand()%(max-min));
		for(j=0;j<adet;j++){
			if(random==d[j])
			goto e;
		}
		
		d[i]=random;	
		
		}
	}
	else{
		for(i=0;i<adet;i++)
		{
			
		random=min+(rand()%(max-min));
		d[i]=random;	
		
		}
	}
	
	for(i=0;i<adet;i++)
	printf("%d  ",d[i]);

	getchar();
	getchar();
	return 0;
}
