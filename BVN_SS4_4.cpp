#include<stdio.h>
int main(){
	int year, month;
	printf("Nhap so nam va so thang: ");
	scanf("%d %d",&year ,&month );
	int day;
	switch(month){
		case 1:
			day=31;
			break;
		case 3:
			day=31;
			break;
		case 5:
			day=31;
			break;
		case 7:
			day=31;
			break;
		case 8:
			day=31;
			break;
		case 10:
			day=31;
			break;
		case 12:
			day=31;
			break;
		case 4:
			day=30;
			break;
		case 6:
			day=30;
			break;
		case 9:
			day=30;
			break;
		case 11:
			day=30;
			break;	
		case 2:
			if(year%4==0){
				day=29;
			}else{
				day=28;
			}
		default:
			printf("Thang khong hop le");
	}
	printf(" Thang %d co %d ngay",month,day);
}
