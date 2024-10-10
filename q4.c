#include <stdio.h>

int main() {
    int len,a;
    int min=999999;
    int max=0;
    printf("enter length of array");
    scanf("%d",&len);
    int arr[len];
    int i;
    
    for(i=0;i<len;i++){
        printf("enter number");
        scanf("%d",&arr[i]);
    }
    printf("%d",arr);
    for(a=0;a<len;a++){
        if (arr[a]<min){
            min=arr[a];//checks for the minimum number in the array
        }
        if (arr[a]>max){
            max=arr[a];//checks for max num in the array
        }
        
    }
    printf("max: %d \n",max);
    printf("min: %d",min);
    return 0;
}
