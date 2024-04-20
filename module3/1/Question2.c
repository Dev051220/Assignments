#include<stdio.h>
int main(){
int num1,num2,result;
printf("enter num1 and num2:");
scanf("%d %d",&num1,&num2);
result=num1+num2;
printf("\n Addition:%d",result);
result=num1-num2;
printf("\n Subtraction:%d",result);
result=num1*num2;
printf("\n Multiplication:%d",result);
result=num1/num2;
printf("\n Division:%d",result);
result=num1%num2;
printf("\n Modulo:%d",result);
}