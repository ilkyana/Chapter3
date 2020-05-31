#include<stdio.h>
void main(){
int sum = 0;
int rem;
int n1;
int n;
for( n=1 ; n<=500 ; n++ ){
scanf("%d",&n);
n1=n;
while(n>0){
rem = n%10;
sum = sum+(rem*rem*rem);
n = n/10;
}
if(n1==sum){
printf("%d" ,n1);
}
sum = 0;
}

}
