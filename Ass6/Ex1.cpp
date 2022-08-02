#include <stdio.h>
#include <math.h>

int main(){
	int n; 
	int arr[n];
	int S=0; 
	for(int i=0;i<n;i++){
		if(arr[i]!2==1){
			S += arr[i];	
		}	
	}
	printf("Trung binh cong cac so le trong mang la: %d",S/n); 
} 
