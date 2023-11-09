#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Nhap 3 so a, b, c: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	int max=num1;
	int min=num1;
	if(num1<num2){
		max=num2;
		if(num2<num3){
			max=num3;
		}
	}
	if(num1>num2){
		min=num2;
		if(num2>num3){
			min=num3;
		}
	}
	int num=num1+num2+num3-max-min;
	printf("%d%d%d",max,num,min);
}
