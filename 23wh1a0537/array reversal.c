#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int a[num];
    for(i=0;i<num;i++){
         a[num-i-1]=arr[i];
    }
    for(i = 0; i<num;i++){
        arr[i] = a[i];
    }

    for(i = 0; i < num; i++)
        printf("%d ",*(arr+i));
    return 0;
}
