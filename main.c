#include <stdio.h>

int main()
{
    int distance;
    int order_value;

    // Đọc đồng thời 2 giá trị trên cùng 1 dòng
    if (scanf("%d %d", &distance, &order_value) != 2)
    {
        return 0;
    }

    // 1. Khoảng cách <= 0 hoặc giá trị đơn hàng < 0
    if (distance <= 0 || order_value < 0)
    {
        printf("INVALID");
    }
    // 2. Giá trị đơn hàng >= 500.000đ và khoảng cách <= 15km
    else if (order_value >= 500000 && distance <= 15)
    {
        printf("0");
    }
    // 3. Các trường hợp còn lại
    else if (distance >= 1 && distance <= 5)
    {
        printf("15000");
    }
    else if (distance >= 6 && distance <= 15)
    {
        printf("25000");
    }
    else if (distance > 15)
    {
        printf("40000");
    }

    return 0;
}
