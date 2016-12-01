#include<stdio.h>
void insertSort(int a[],int count){
    int i,j,k,temp;
    for(i=0;i<count;i++){
        temp=a[i];
        for(j=i-1;j>=0;j--){
            if(temp>=a[j])
                break;
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    
        for(k=0;k<=i;k++)
            printf("%d \t",a[k]);
        printf("\n");
    }
}
int main(void){
    int arr[]={5,2,8,1,9,7};
    int i,count;
    count=sizeof(arr)/sizeof(int);
    printf("정렬 전 데이터 : ");
    for(i=0;i<count;i++)
        printf("%d \t",arr[i]);
    printf("\n");
    
    insertSort(arr,count);
    printf("정렬 후 데이터 : ");
    for(i=0;i<count;i++)
        printf("%d \t",arr[i]);
    printf("\n");




    return 0;
}
