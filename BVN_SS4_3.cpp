#include<stdio.h>
int main(){
	int a,b,c,d,e; //a=so dien moi, b=so dien cu, c=so dien dung trong 1 thang, d=so tien dien, e=so tien dien phai tra
	printf("Nhap so dien moi va so dien cu ");
	scanf("%d %d",&a,&b);
	c=a-b;
	if(0<c<=50){
		d=10000;
	}else if(50<c<=100){
		d=15000;
	}else if(100<c<=150){
		d=20000;
	}else if(150<c<=200){
		d=25000;
	}else if(200<c){
		d=30000;
	}
	e=c*d;
	printf("So tien dien phai tra la %d vnd",e);
}
