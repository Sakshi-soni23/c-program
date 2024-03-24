#include<stdio.h>
void main(){
    /*
int a;
printf("enter any number");
scanf("%d",&a);
if(a%2==0){
    printf("is even");
}
else{
    printf("odd");

}
return 0;
*/
int a,b,c;
printf("enter any three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
    if(a>c){
        printf("a is largest number ");
    }
    else{
        printf("c is largest number");
    }

}
if(b>c){
    printf("b is largest number");
}else{
printf("c is largest number");
}
return 0;
}

