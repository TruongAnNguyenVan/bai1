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
	
	if(a>b){
		if(a>c){
			printf("so lon nhat la: %d",a); 
		}else{
			printf("so lon nhat la: %d",c); 
		}
	}else{
		if(b<c){
			printf("so lon nhat la: %d",c); 
		}else{
			printf("so lon nhat la: %d",b); 
		} 
	} 
} 
