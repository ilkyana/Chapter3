#include<stdio.h>
void main(){
int n,num;
int big,small,range;
printf("\nHow many numbers do you want in list\n");
scanf("%d",&n);
printf("\nEnter the %d numbers",n);
scanf("%d",&num);
small = big = num;
while(n>1){
scanf("%d",&num);
if(num>big){
big = num;
}
 if(num<small){
small = num;
}
n--;
}
printf("\nsmall and big numbeers are %d %d",small , big);
range = big-small;
printf("\nRange is %d",range);

}
