#include<stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    return 0;
}
