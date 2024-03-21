#include <iostream>
#include <math.h>

//cau 3
/*int main()
{
    double a,b,c;
    printf("Nhap diem Toan: ");
    scanf_s("%lf", &a);  // Sử dụng %lf để đọc giá trị double
    printf("Nhap diem Ly: ");
    scanf_s("%lf", &b);
    printf("Nhap diem hoa: ");
    scanf_s("%lf", &c);

    double DTB = (a + b + c) / 3;
    printf("Diem TBM la: %lf", DTB);
   
   

    return 0;  // Thêm return 0 để báo hiệu kết thúc chương trình thành công

}*/
//Cau 4
/*int main() {
    double goc;
    double M_PI = 3.14;
    printf("Nhap gia tri goc (don vi do): ");
    scanf_s("%lf", &goc);

    // Chuyen doi goc tu do sang radian
    double radian = goc * M_PI / 180.0;

    printf("Gia tri goc (don vi radian): %.3lf\n", radian);

    // Chuyen doi goc tu radian sang do
    goc = radian * 180.0 / M_PI;

    printf("Gia tri goc (don vi do): %.3lf\n", goc);

    return 0;
}*/
//cau 5
/*int main()
{
    int a, b;

    printf("Nhap gia tri cua a: ");
    scanf_s("%d", &a);

    printf("Nhap gia tri cua b: ");
    scanf_s("%d", &b);

    // Kiem tra a va b co giong nhau hay khong
    if (a == b) {
        printf("a va b giong nhau.\n");
    }
    else {
        printf("a va b khac nhau.\n");
    }

    return 0;
}*/

//cau 6
int main() {
    double a, b, c;
    double x1, x2;
    float delta;

    // Nhap gia tri cua a, b, c
    printf("Nhap gia tri cua a: ");
    scanf_s("%lf", &a);

    printf("Nhap gia tri cua b: ");
    scanf_s("%lf", &b);

    printf("Nhap gia tri cua c: ");
    scanf_s("%lf", &c);

    printf("\nPhuong trinh co dang: %0.0fx^2 +%0.0fx +%0.0f = 0", a, b, c);
    if (a == 0) {
        // a== 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
        if (b == 0) {
            if (c == 0) {
                printf("\nPhuong trinh vo so nghiem.\n");
            }
            else {
                printf("\nPhuong trinh vo nghiem.\n");
            }
        }
        else {
            printf("\nPhuong trinh co nghiem x = %0.2f\n", -c / b);
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nNghiem thu nhat x1 = %0.2f\n", x1);
            printf("\nNghiem thu nhat x2 = %0.2f\n", x2);
        }
        else if (delta == 0) {
            printf("\nPhuong trinh co nghiem kep: x1 = x2 = %0.2f\n", -b / 2 * a);
        }
        else {
            printf("\nPhuong trinh vo nghiem\n");
        }
    }


    return 0;
}