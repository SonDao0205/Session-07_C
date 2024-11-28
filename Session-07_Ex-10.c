#include<stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu co trong mang : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Cac phan tu la SNT : \n");
    for (int i = 0; i < n; i++) {
        int prime = 1;
        if (arr[i] < 2){
            prime = 0;
        }
        for (int j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d ", arr[i]);
        }
}
}