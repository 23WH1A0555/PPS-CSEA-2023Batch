#include<stdio.h>
int main(){
	int arr1[30], arr2[30], no;
	printf("Enter the number of elements: ");
	scanf("%d", &no);
	printf("Enter %d numbers: ", no);
	for(int i = 0; i < no; i++){
		scanf("%d",&arr1[i]);
		}
	for(int i = 0; i < no; i++){
		arr2[i] = arr1[i];
		}
	for (int i = 0; i < no; i++){
		printf("\n%d",arr2[i]);
		}
	return 0;
	}
