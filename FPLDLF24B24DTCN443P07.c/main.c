/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 07
*/

#include <stdio.h>

int tinhTongSoLe(int arr[], int size) {
    int tong = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            tong += arr[i];
        }
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int tong = tinhTongSoLe(arr, n);
    printf("Tong cac so le trong mang: %d\n", tong);

    return 0;
}
