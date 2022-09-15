#include<stdio.h>
int main(){
 double cd[5], cd10[5], cdX[5], porcentagem;
 int i;
 
 for(i=0;i<5;i++){
 	printf("digite o valor do cd: ");
 	scanf("%lf", &cd[i]);
 }
 for(i=0;i<5;i++){
 	cd10[i] = cd[i] + cd[i] * 10/100;
 }
 printf("vendedor, qual a porcentaguem em cada cd: ");
 scanf("%lf", &porcentagem);
 
 for(i=0;i<5;i++){
 	cdX[i] = cd[i] + cd[i] * (porcentagem/100);
 }
 
 for(i=0;i<5;i++){
 	printf("O valor do cd e %.2lf\n", cd[i]);
 	printf("O valor do cd10 e %.2fl\n", cd10[i]);
 	printf("o valor do cdX e %.2fl\n", cdX[i]);
 	
 }
 
}