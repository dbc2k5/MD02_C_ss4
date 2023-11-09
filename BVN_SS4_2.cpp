#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap do dai ba canh tam giac: ");
	scanf("%d %d %d",&a,&b,&c);
	 if((a==b||b==c||c==a)&&(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)){
		printf("La tam giac vuong can");
	}else if(a==b&&b==c){
		printf("La tam giac deu");
	}else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
		printf("La tam giac vuong");
	}else if(a==b||b==c||c==a){
		printf("La tam giac can");
	}else if(a+b>c||a+b>c||b+c>a){
		printf("La tam giac thuong");
	}
}
