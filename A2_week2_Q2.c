#include <stdio.h>

int main(){
    int num, m, n, counter=0;
    scanf("%d",&num);
    while(num!=-1){
       m=num;
       scanf("%d",&num);
       n=num;
       if((m!=n) && (num!=-1))
       counter++;
   }
   if(counter>=0)
      printf("%d",counter+1);
   else
      printf("0");
   return 0;
}