#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n); 
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu cua mang: ");
		scanf("%d",&arr[i]); 
	}
	
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	
	for(int i=0;i<=n;i++){
		if(arr[i]==x){
			printf("%d co ton tai trong mang",x); 
		}else{
			printf("%d khong ton tai trong mang"); 
		} 
	} 
}
