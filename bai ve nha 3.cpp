#include<stdio.h>
#include<math.h>

 int main(){
 	 
 	int nam;
	  printf(" nhap so nawm ");
	  scanf("%d",&nam);
	  
	  if ((nam%4==0)&&(nam%100!=0)||(nam%400==0)){
	  
	  	  	 printf( "day la nam nhuan /n", nam);
	  	 
	  	 }else{
	  	 	
	  	 	printf("day khong phai nam nhuan /n",nam);
		   }
	  	 
	  
 	 
 }
