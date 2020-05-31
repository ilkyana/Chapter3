#include<stdio.h>
void main(){
int n;
int fact = 1; 
printf("Enter the number\n");
scanf("%d",&n);
for(int i = n ; i>1 ; i--){
fact = fact*i;
}
printf("\nThe factorial of the number is %d",fact);
}
