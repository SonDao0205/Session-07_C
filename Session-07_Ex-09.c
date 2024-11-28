#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap hang m : ");
    scanf("%d",&m);
    printf("Nhap cot n : ");
    scanf("%d", &n);
    int arr[m][n];
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }   
    }
    printf("Bien tren\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[0][i]);
    }
    printf("\n");
    printf("Bien duoi\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[m-1][i]);
        
    }
    printf("\n");
    printf("Bien trai\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d\t",arr[i][0]);
    }
    printf("\n");
    printf("Bien phai\n");
    for (int i = 0; i < m ; i++)
    {
        printf("%d\t",arr[i][n-1]);
    }
    printf("\n");
}
