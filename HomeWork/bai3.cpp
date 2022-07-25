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
	
	double p;
	double d;
	double s; 
	
	if(a+b>c && a+c>b && b+c>a){ 
		p = (a+b+c)/2;
		d = a + b + c;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("a,b,c là ba canh cua mot tam giac co: \n");
		printf("Chu vi la: %f \n",d);
		printf("Dien tich la: %f",s); 
	}else{
		printf("a,b,c khong phai la ba canh cua mot tam giac"); 
	} 
} 
