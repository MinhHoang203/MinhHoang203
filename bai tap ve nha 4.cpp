#include<stdio.h>
#include<math.h>

int main(){
	
	int chr;
	printf("nhap ky tu :");
	scanf("%c",&chr);
	
	 if ((chr>='A')&&(chr<='Z')){
		 printf("chu in hoa/n");
    }else
	 if ((chr>='a')&&(chr<='z')){
	     printf("chu in thuong/n");		
	}else
	 if ((chr>='0')&&(chr<='9')){
	 	printf("day la so/n");
	}else{
		 printf("day la ky tu dac biet/m");
	}
	
	
	
}
