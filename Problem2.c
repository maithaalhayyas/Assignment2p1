#include<stdio.h>

void amazeWOW() {
    int i;
    printf("amazeWOW:\t");
    for (i = 0; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
void amaze1(){
     int i=1;
     while(i<10){
       printf("%d ",i);
       i+=2;
       
     }
     
     printf("\n");
}

void amaze2(){

    int i;
    for(i=1;i<=10;i++){
      (i%2!=0)?printf("%d ",i):0;
    }
    printf("\n");
}

void amaze3()
{
   int i;
   for(i=1;i<=10;i++){
   
      if ((i ^ 1) !=(i + 1)){
         printf("%d ",i);
      }
   }
   
   printf("\n");
    
}
void amaze4(){
    // n&1 is 1, then odd, else even
    int i;
    for(i=1;i<=10;i++){
     if((i&1)==1){
         printf("%d ",i);
       }
    }
    
    printf("\n");
}

void amaze5(){

    // n|1 is greater than n, then even, else odd
  int i;
  for(i=0;i<=10;i++){
    if ((i | 1) > i)
        continue;
    else
        printf("%d ",i);
    }
    
    printf("\n");

}

