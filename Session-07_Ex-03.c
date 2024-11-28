#include<stdio.h>
int main(){
    int arr[5] = {3,1,5,1,3};
    int check = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d\n", arr[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("Mang khong co so chan");
    }
    
}