#include<stdio.h>
void main(){
int n;
int p=0;
int neg =0;
int z=0;
char another;

do{

printf("Enter the number");
scanf("%d",&n);
if(n>0){
p++;
}else if(n<0){
neg++;
} else{
z++;
}
printf("Do you want to add number? Y/N");
scanf("%c",&another);
}while(another=='Y');

if(another=='N'){
printf("The value of positive integer %d , The value of negetive integer %d and The value of zero value %d" , p,neg,z);
}

}
