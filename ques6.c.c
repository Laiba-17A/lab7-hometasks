#include <stdio.h>
int main(){
    int len,j,x,w;
    printf("enter the length of array");
    scanf("%d",&len);
    int i;
    int arr[len];
    int repeat[len];
    int count[len];
    for(i=0;i<len;i++)
    {
      printf("enter element %d: ",i+1);
      scanf("%d",&arr[i]);
    }
    //initializing all elements count to 0 initially
   for (x=0;i<len;x++){
        count[x]=0;
    }
    //count occurence
    for(x=0;i<len;x++){
        if(arr[x]>=0 && arr[x]<len){
        count[arr[x]]++;
        }
    }
    //find repeated elements
    j=-1;
    for(x=0;x<len;x++){
        if (count[x]>1){
            repeat[j++]=x;
        }
    }
    //displaying output
    if(j<0){
        printf("no element is repeated");
    }
    else if(j==0) {
        printf("%d is repeated more than once",repeat[0]);
    }
    else {
         printf("%d,",repeat[0]);
         for(w=1;w<j;w++){
         printf(" %d ,",repeat[w]);
         }
         printf("and %d is repeated more than once",repeat[j]);
     } 
     
    return 0;
}