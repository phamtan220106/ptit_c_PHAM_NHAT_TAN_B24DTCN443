/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 05
*/

#include <stdio.h>
#include <math.h>

int main() {
    double duongKinh, chieuCao;
    printf("Nhap duong kinh: ");
    scanf("%lf", &duongKinh);
    printf("Nhap chieu cao: ");
    scanf("%lf", &chieuCao);

    double banKinh = duongKinh / 2.0;
    double theTich = M_PI * banKinh * banKinh * chieuCao;

    printf("The tich hinh tru: %lf\n", theTich);

    return 0;
}
