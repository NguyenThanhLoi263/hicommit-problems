#include<stdio.h>
int main()
{
	int d,m,y;
	scanf("%d%d%d", &d,&m,&y );
	if(y%400==0||(y%4==0 && y%100!=0))
	{
		if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>=1&&d<=31)
		{
			printf("VALID");
		}
		else if((m==4||m==6||m==9||m==11)&&d>=1&&d<=30)
		{
			printf("VALID");
		}
		else if(m==2 && d>=1&&d<=29)
		{
			printf("VALID");	
		}
		else{
			printf("INVALID");
		}
	}
	else{
		if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>=1&&d<=31)
		{
			printf("VALID");
		}
		else if((m==4||m==6||m==9||m==11)&&d>=1&&d<=30)
		{
			printf("VALID");
		}
		else if(m==2 &&d>=1&&d<=28)
		{
			printf("VALID");
		}
		else{
			printf("INVALID");
		}
	}
	return 0;
}