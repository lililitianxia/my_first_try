#include <stdio.h>
#ifdef VIP
int main(){
    printf("Welcome VIP!\n");
    printf("You have access to the VIP features.\n");
    printf("Please input 6 numbers,and we'll order them for you!\n");
    int a[6],i,j,k;
    for (i=0;i<6;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
      for (j=i+1;j<6;j++){
        if(a[i]>a[j]){
          k=a[j];a[j]=a[i];a[i]=k;
        }
      }
    }
    for(i=0;i<6;i++){
      printf("%d ",a[i]);
    }
    return 0;
}
#else
int main(){
    printf("You have no access!\n");
    return 0;
}
#endif