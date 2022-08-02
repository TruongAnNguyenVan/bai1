#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[n]; 
	
	printf("Nhap phan tu cua mang: ");
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]); 
	}
	
	for(int i=n;i<1;i--){
		if(arr[i]!2=1){
			printf("%d la so le cuoi cung cua mang");
			break; 
		} 
	} 
}
