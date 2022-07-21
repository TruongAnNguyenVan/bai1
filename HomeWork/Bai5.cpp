#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b: ");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c: ");
	scanf("%d",&c);
	
	int max = a;
	if(b>max){
		max = b;	
	}else{
		if(max<c){
			max = c; 
		} 
	}
	
	printf("so lon nhat la: %d",max); 
} 
