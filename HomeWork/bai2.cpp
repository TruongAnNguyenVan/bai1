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
	
	double delta = b*b - 4*a*c;
	double x1;
	double x2; 
	
	if(delta<0){
		printf("Phuong trinh vo nghiem"); 
	
	}else{
		
		if(delta == 0){
		x1 = (double) (-b)/(2*a);
		printf("Phuong trinh co nghiem kep x1 = x2 = %f",x1); 
		
		}else{ 
			x1 = (double) ((-b + sqrt(delta))/(2*a));
			x2 = (double) ((-b - sqrt(delta))/(2*a));
			printf("Phuong trinh co nghiem x1 = %f",x1);
 			printf(" va x2 = %f",x2);
		}		 
	}
}
