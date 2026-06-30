#include<stdio.h>
int main(){
int a,b,c,max,min;
printf("Enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c){
  printf("%d",a);
}
else if(b>c &&b>c){
   printf("%d",b);
}
else
  printf("%d",c);

}
