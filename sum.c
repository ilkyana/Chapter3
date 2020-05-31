#include<stdio.h>
void main(){
float sum=0.0;
for(int i = 1 ; i<=4 ; i++){
int fact = 1;
for(int j = i; j<=1 ; j--){
fact = fact*j;
sum = sum +(i/fact);
}
}
printf("%f",sum);
}
