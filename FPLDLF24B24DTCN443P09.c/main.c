/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 09
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

void sapXepTheoGiaBan(DienThoai *ds, int soLuong) {
    for (int i = 0; i < soLuong - 1; i++) {
        for (int j = i + 1; j < soLuong; j++) {
            if (ds[i].giaBan > ds[j].giaBan) {
                DienThoai temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

int timSanPhamGiaLonHon(DienThoai *ds, int soLuong, double gia) {
    for (int i = 0; i < soLuong; i++) {
        if (ds[i].giaBan > gia) {
            return 1;
        }
    }
    return 0;
}

void inDanhSach(DienThoai *ds, int soLuong) {
    for (int i = 0; i < soLuong; i++) {
        inThongTin(ds[i]);
        printf("\n");
    }
}

int main() {
    int soLuong;
    printf("Nhap so luong san pham: ");
    scanf("%d", &soLuong);

    DienThoai ds[soLuong];
    getchar();

    for (int i = 0; i < soLuong; i++) {
        printf("Nhap thong tin san pham thu %d:\n", i + 1);
        nhapThongTin(&ds[i]);
    }

    sapXepTheoGiaBan(ds, soLuong);

    printf("\nDanh sach san pham sau khi sap xep theo gia ban tang dan:\n");
    inDanhSach(ds, soLuong);

    double giaKiemTra;
    printf("Nhap gia de kiem tra: ");
    scanf("%lf", &giaKiemTra);

    if (timSanPhamGiaLonHon(ds, soLuong, giaKiemTra)) {
        printf("Co san pham co gia lon hon %.2lf\n", giaKiemTra);
    } else {
        printf("Khong co san pham nao co gia lon hon %.2lf\n", giaKiemTra);
    }

    return 0;
}
