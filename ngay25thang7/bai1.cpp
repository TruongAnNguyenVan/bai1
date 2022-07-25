#include <stdio.h>
#include <math.h>

int main(){
	int d,m;
	printf("Nhap ngay: ");
	scanf("%d",&d);
	printf("Nhap thang: ");
	scanf("%d",&m);
	int r = 8; 
	 
	switch(m){
		case 1:
			if(d <31){ 
				d = d + 0;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d); 
			}else{
				printf("Ngay khong ton tai"); 
			} 
			break; 
		case 2:
			if(d<28){
				d = d + 31;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai"); 
			}
			break; 
		case 3:
			if(d<31){
				d = d + 31 + 28;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			} 
			break; 
		case 4:
			if(d<30){
				d = d + 31+28+31;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			} 
			break; 
		case 5:
			if(d<31){
				d = d + 31+28+31+30;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			} 
			break; 
		case 6:
			if(d<30){
				d = d + 31+28+31+30+31;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			} 
			break; 
		case 7:
			if(d<31){
				d = d + 31+28+31+30+31+30;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			}
			break; 
		case 8:
			if(d<31){
				d = d + 31+28+31+30+31+30+31;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai"); 
			} 
			break; 
		case 9:
			if(d<30){
				d = d + 31+28+31+30+31+30+31+31;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			} 
			break; 
		case 10:
			if(d<31){
				d = d + 31+28+31+30+31+30+31+31+30;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			} 
			break; 
		case 11:
			if(d<30){
				d = d + 31+28+31+30+31+30+31+31+30+31;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai"); 
			} 
			break; 
		case 12:
			if(d<31){
				d = d + 31+28+31+30+31+30+31+31+30+31+30;
				r = d%7;
				printf("la ngay thu %d trong nam \n",d);
			}else{
				printf("Ngay khong ton tai");
			} 
			break; 
		default:
			printf("Thang khong ton tai");
			break;	
	} 
	
	switch(r){
		case 0:
			printf("thu 2");
			break; 
		case 1:
			printf("thu 3");
			break; 
		case 2:
			printf("thu 4");
			break; 
		case 3:
			printf("thu 5");
			break; 
		case 4:
			printf("thu 6");
			break; 
		case 5:
			printf("thu 7");
			break; 
		case 6:
			printf("chu nhat");
			break;
		default:
			printf("\nNgay khong ton tai"); 
	}
} 
