#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap so hang : ");
    scanf("%d", &m);
    printf("Nhap so cot : ");
    scanf("%d", &n);
    int array[m][n];
    for (int i = 0; i < (sizeof(array)/sizeof(int)); i++)
    {
        for (int j = 0; j < (sizeof(array[i])/sizeof(int)); j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }   
    }
    printf("\nSo phan tu ban vua nhap la : \n");
    for (int i = 0; i < (sizeof(array)/sizeof(int)); i++)
    {
        for (int j = 0; j < (sizeof(array[i])/sizeof(int)); j++)
        {
            printf("array[%d][%d] = %d \n",i,j,array[i][j]);
        }   
    }
    
}