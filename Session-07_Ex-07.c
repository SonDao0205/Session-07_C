#include<stdio.h>
int main(){
    int n;
    int check = 0;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        do
        {
            check = 0;
            printf("Nhap arr[%d] = ",i);
            scanf("%d", &arr[i]);
        } while (arr[i] % 2 == 0);
        check++;
        if (check != 0)
        {
            printf("\nok\n");
        }
        
    }
    
}