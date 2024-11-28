#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap hang m : ");
    scanf("%d",&m);
    printf("Nhap cot n : ");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }   
    }
    printf("Bien tren : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[0][i]);
    }
    printf("\nBien trai : \n");
    for (int i = 0; i < m ; i++)
    {
        printf("%d\t",arr[i][0]);
    }
    printf("\nBien duoi : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[m-1][i]);
    }
    printf("\nBien phai : \n");
    for (int i = 0; i < m; i++)
    {
        printf("%d\t",arr[i][m]);
    }
}