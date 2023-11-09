#include<stdio.h>
int main(){
	float a,b,c,d; //a= luong co ban, b= so ngay lam thuc
	c=26;
	printf("Nhap so luong co ban: ");
	scanf("%f",&a);
	printf("Nhap so ngay lam thuc te: ");
	scanf("%f",&b);
	if(b>26){
	    d=c+(b-c)*1,5;
		float salary1=a*(d/c);
		printf("So luong thang nay la %.2f",salary1);
	}else {
	float salary2=a*(b/c);
	printf("So luong thang nay la %.2f",salary2);
    }
}
