#include <stdio.h>
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
	
	int min = a;
	if (min>b) {
		min = b; 
	}else{
		if (min>c){
			min = c; 
		}
	}
	
	printf("So be nhat là: %d",min); 
} 
