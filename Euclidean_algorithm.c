#include <stdio.h>
int ucle(int a,int b){
    int temp;
    int big,small;
    if(a<b){
        big=b;
        small=a;
        }
    else{
        big=a;
        small=b;                         
        }
    while(small){
        temp=big%small;
        big=small;
        small=temp;
        }
     return big;
}

void main(){
      int a,b;
      int g;
      int s;
      printf("두 수를 입력해 주세요 \n");
      scanf("%d %d",&a,&b);
      g=ucle(a,b);
      s=(a/g)*(b/g)*g;
      printf("두 수의 최대공약수 : %d \n",g);
      printf("두 수의 최소공배수 : %d \n",s);
      printf("두 수의 합 : %d \n",g+s);                    
}

//Writer_Sori
