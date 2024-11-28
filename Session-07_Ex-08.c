#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap so hang : ");
    scanf("%d", &m);
    printf("Nhap so cot : ");
    scanf("%d", &n);
    int array[m][n];
    printf("Nhap phan tu vao cac mang : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }   
    }
    printf("\nSo phan tu ban vua nhap la : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array[%d][%d] = %d \n",i,j,array[i][j]);
        }   
    }
    
}
