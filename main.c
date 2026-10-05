#include<stdio.h>

int main()
{
	int distance;
	int order_valua;
    int phigiaohang=0;
	printf("nhap khoan cach: ");
	scanf("%d", &distance);
	printf("nhap gia tri don: ");
	scanf("%d", &order_valua);
	if(distance<1||order_valua<0 )
	{
		printf("invalid");
		
	}
    else if(order_valua>=50000 && distance<15 )
    {
      phigiaohang=0;
      printf("%d", phigiaohang);
    }
    else if(distance>=1 && distance<=5)
    {
      phigiaohang=order_valua*15000;
      printf("%d", phigiaohang);
    }
    else if(distance>=6 && distance<=15)
    {
      phigiaohang=order_valua*25000;
      printf("%d", phigiaohang);
    }
    else if(distance>15)
    {
      phigiaohang=order_valua*40000;
      printf("%d", phigiaohang);
    }
    return 0;
}