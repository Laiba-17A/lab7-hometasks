#include <stdio.h>
int main(){
    int temp[7],j;
    int ext[7];
    int i=1;
    int sum=0;
    int b=0;
    for(i=0;i<7;i++){
        printf("enter the temperature for day %d ",i+1);
        scanf("%d",&temp[i]);
        sum=sum+temp[i]; //calculate the sum of temperatures
        if (temp[i]>40 || temp[i]<0){ //checking for extreme temp
            ext[b]=i+1;
            b=b+1;
        }
    }
    
    int avg;
    avg=sum/7;
    
    if (b<0) // if there is no extreme temp
    {
    printf("Average temperature: %d , Extreme temperature:",avg);
    }
    else{
        printf("Average temperature: %d, Extreme temperature on day %d ",avg,ext[0] );
        for(j=1;j<b;j++){
            
            printf("and day %d ",ext[j]);
        }
    }
    return 0;
}