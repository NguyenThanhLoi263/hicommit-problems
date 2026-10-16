#include<stdio.h>

int main()
{
	int distance;
	int order_value;
    
	printf("nhap khoan cach: ");
	scanf("%d", &distance);
	printf("nhap gia tri don: ");
	scanf("%d", &order_value);
	if(distance<1||order_value<0 )
	{
		printf("INVALID");
		
	}
    else if(order_value>=50000 && distance<15 )
    {
     
      printf("0");
    }
    else if(distance>=1 && distance<=5)
    {
      
      printf("15000");
    }
    else if(distance>=6 && distance<=15)
    {
      
      printf("25000");
    }
    else if(distance>15)
    {
      
      printf("40000");
    }
    return 0;
}