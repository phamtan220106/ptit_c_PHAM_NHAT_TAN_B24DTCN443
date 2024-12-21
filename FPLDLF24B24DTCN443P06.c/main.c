/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 06
*/

#include <stdio.h>
#include <math.h>

double tinhTheTichHinhTru(double duongKinh, double chieuCao) {
    double banKinh = duongKinh / 2.0;
    return M_PI * banKinh * banKinh * chieuCao;
}

int main() {
    double duongKinh, chieuCao;
    printf("Nhap duong kinh: ");
    scanf("%lf", &duongKinh);
    printf("Nhap chieu cao: ");
    scanf("%lf", &chieuCao);

    double theTich = tinhTheTichHinhTru(duongKinh, chieuCao);
    printf("The tich hinh tru: %lf\n", theTich);

    return 0;
}
