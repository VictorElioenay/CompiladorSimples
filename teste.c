#include<stdio.h>
#include<stdlib.h>

int main(){
   int    numero;
   int    i;
   scanf("%d",&numero);
   for(i=1;i<5;i+=1){
      printf("\n%d",i);
      printf("\n%d",numero);
   }
   printf("\n%d",numero);
   int    a;
   int    b=4;
   int    c=6;
   int    d=c*2;
   int    m=b+c+d;
   float    f1=3.14;
   float    m1;
   float    a1;
   int    paulo;
   float jk[50];
   jk[1]=2;
   if(((jk[2]+jk[1])>3)){
      printf("\n%d",a);
   }
   else{
      printf("\n%d",b);
      printf("\n%d",c);
   }
   while((a>c&&b>c)||c>a){
      printf("\n%d",a*10);
      a=a-1;
   }
   paulo=3;
   a=9;
   d=a*b-m;
   m1=f1*2;
   printf("\n%d",a);
   printf("\n%f",f1);
   printf("\n%d",5);
   printf("\n%f",8.7);
   printf("\n%f",a*b-f1);
   printf("\n%d",b+c-(b/c*d+!c));
   printf("\n%f",m1+d);
   printf("\n%d",paulo);
   printf("\n%d",d);
   d=!a;
   printf("\n%d",d);
   return 0;
}