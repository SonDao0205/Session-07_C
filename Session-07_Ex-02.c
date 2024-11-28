#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Nhap arr[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("---------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
    
}