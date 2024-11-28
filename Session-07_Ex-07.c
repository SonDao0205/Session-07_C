#include<stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d",&n);
    int arr[n];
    printf("Chi nhap so le\n");
    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Nhap arr[%d] = ",i);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
            {
                printf("Chi nhap so le, Nhap lai!!\n");
            }
        } while (arr[i] % 2 == 0);
    }
}
