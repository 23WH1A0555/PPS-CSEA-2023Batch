#include<stdio.h>
int main(){
	int i, j, arr[30],  temp[30], shiftfactor, len, temp1;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &len);
	printf("Enter %d numbers: ", len);
	for(i = 0; i < len; i++){
		scanf("%d",&arr[i]);
		temp[i] = arr[i];
	}
	temp[len] = temp[0];
	printf("Enter the number of times the array is to be left rotated: ");
	scanf("%d", &shiftfactor);
	for(i = 0; i < shiftfactor; i++){
		
		for(j = 0; j < len; j++){
			temp1 = arr[1];
			arr[j] = temp[j+1];
		}
                for(j = 0; j < len; j++){
			temp[j] = arr[j];
		}
		temp[len] = temp[0];
	}
	printf("After left rotating %d times, the given array becomes: ", shiftfactor);
        for(i = 0; i < len; i++){
                printf("%4d",arr[i]);
	}
}
