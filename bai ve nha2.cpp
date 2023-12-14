#include <stdio.h>
#include <math.h>

int main (){
	
	int(KG);
	printf("nhap can nang cua = ",KG);
	scanf("%d",&KG);
	
	int(M);
	printf("nhap chieu cao cua ban =",M);
	scanf("%f",&M);
	
		float bmi=KG/(M*M,2);
		printf("Chi so BMI cua ban la : %.2f\n", bmi);

		
		
	    if(bmi<18.50){
		printf("tinh trang gay/n",KG,M);
	}else
		                                      
		if(bmi>=18.50 && bmi <= 25.00 ){	
		printf("tinh trang binh thuong/n",KG,M);
	}else
		
		if(bmi>= 25.00 && bmi <= 30.00){
		printf("tinh trang thua can/n",KG,M);
	
	}else
		
		if(bmi> 30.00){
			printf("tinh trang beo phi/n",KG,M);
		
	}else{
		printf("ban nhap sai KG hoac M /n",KG,M); 
	} 

	
}
	

	
