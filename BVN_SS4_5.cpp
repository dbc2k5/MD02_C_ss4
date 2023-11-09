#include<stdio.h>
int main(){
	int year, month, day;
	printf("Nhap nam, nhap thang, nhap ngay ");
	scanf("%d %d %d",&year,&month,&day);
	if(year<0){
		printf("Nam khong hop le");
	}
	if(month<1||month>12){
		printf("Thang khong hop le");
	}
	if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(day<0||day>31)){
		printf("Ngay khong hop le");
	}
	if((month==4||month==6||month==9||month==11)&&(day<0||day>30)){
		printf("Ngay khong hop le");
	}
	if((year%4==0)&&(month==2)&&(day<0||day>30)){
		printf("Ngay khong hop le");
	}else if((year%4==0)&&(month==2)&&(day<0||day>29)){
		printf("Ngay khong hop le");
	}else {
	printf("Nam %d, thang %d, ngay %d",year,month,day);
    }
}
