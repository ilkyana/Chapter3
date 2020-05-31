#include<stdio.h>
void main(){
int n1 , n2;
int pow = 1;
printf("\nEnter the number\n");
scanf("%d",&n1);
printf("\nEnter the power\n");
scanf("%d",&n2);
for(int i = 1;i<=n2;i++){
pow = pow*n1;
}
printf("The power of the number is %d",pow);

}
