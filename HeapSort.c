#include<stdio.h>
int a[10];
int n;

void upheap(int x){
        int value=a[x];
        while(x>1&&a[x/2]<value){
                a[x] = a[x/2];
                x = x/2;
                // printf("up ; %d\n",);
        }
        a[x] = value;
}
void heapsort(int a[], int n){
        int i;
        for(i=0;i<n-1;i++){
                insert(a[i]);
        }
        for(i=0;i<n-1;i++){
                a[i] = delete();
                printf("%d번째 삭제 = %5d \n",i+1,a[i]);
        }
}
void insert(int data){
        a[++n]=data;
        upheap(n);
}
int delete(){
        int value = a[1];
        a[1] = a[n--];
        downheap();
        return value;
}

void downheap(){
        int value=a[1];
        int i=1;
        while(i<=n/2){
                int j=i*2;
                if(j+1<=n && a[j]< a[j+1]){
                        j++;
                }
                if(value>=a[j]){
                        break;
                }
                a[i]=a[j];
                i=j;
        }
        a[i] = value;
}


void main(){
        int arr[]={15,2,8,11,9,7};
        int i,count;
        count=sizeof(arr)/sizeof(int);
        printf("정렬 전 데이터 : ");
        for(i=0;i<count;i++){
                printf("%d \t",arr[i]);
        }
        printf("\n");
        heapsort(arr,count+1);
        printf("정렬 후 데이터 : ");
        for(i=0;i<count;i++){
                 printf("%d \t",arr[i]);
        }
        printf("\n");   
}
