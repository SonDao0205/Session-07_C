#include<stdio.h>
int main(){
    int arr[5] = {1,4,2,6,8};
    int max = arr[0], min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    printf("Phan tu lon nhat trong mang la : %d\nPhan tu nho nhat trong mang la : %d\n", max,min);
    return 0;
}
