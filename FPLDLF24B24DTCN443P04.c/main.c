/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 04
*/

#include <stdio.h>
#include <math.h>

int main() {
    double x, R, u, theta;
    const double g = 9.81;

    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap R: ");
    scanf("%lf", &R);
    printf("Nhap u: ");
    scanf("%lf", &u);
    printf("Nhap theta (do): ");
    scanf("%lf", &theta);

    double theta_rad = theta * M_PI / 180.0;
    double y = x * tan(theta_rad) - (g * x * x) / (2 * u * u * cos(theta_rad) * cos(theta_rad));
    printf("Ket qua: %lf\n", y);

    return 0;
}
