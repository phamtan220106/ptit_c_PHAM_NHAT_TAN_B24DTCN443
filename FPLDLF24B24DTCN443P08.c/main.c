/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 08
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char tenSanPham[50];
    char hangSanXuat[50];
    double giaBan;
    int namSanXuat;
} DienThoai;

void nhapThongTin(DienThoai *dt) {
    printf("Nhap ten san pham: ");
    fgets(dt->tenSanPham, sizeof(dt->tenSanPham), stdin);
    dt->tenSanPham[strcspn(dt->tenSanPham, "\n")] = '\0';

    printf("Nhap hang san xuat: ");
    fgets(dt->hangSanXuat, sizeof(dt->hangSanXuat), stdin);
    dt->hangSanXuat[strcspn(dt->hangSanXuat, "\n")] = '\0';

    printf("Nhap gia ban: ");
    scanf("%lf", &dt->giaBan);

    printf("Nhap nam san xuat: ");
    scanf("%d", &dt->namSanXuat);

    getchar();
}

void inThongTin(DienThoai dt) {
    printf("Ten san pham: %s\n", dt.tenSanPham);
    printf("Hang san xuat: %s\n", dt.hangSanXuat);
    printf("Gia ban: %.2lf\n", dt.giaBan);
    printf("Nam san xuat: %d\n", dt.namSanXuat);
}

int main() {
    DienThoai dt;

    nhapThongTin(&dt);
    inThongTin(dt);

    return 0;
}
