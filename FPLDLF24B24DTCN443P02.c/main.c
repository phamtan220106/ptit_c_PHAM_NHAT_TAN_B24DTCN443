/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 02
*/

#include <stdio.h>
#include <string.h>

int main() {
    char maTheSinhVien[50];
    printf("Nhap ma the sinh vien: ");
    fgets(maTheSinhVien, sizeof(maTheSinhVien), stdin);

    size_t length = strlen(maTheSinhVien);
    if (maTheSinhVien[length - 1] == '\n') {
        maTheSinhVien[length - 1] = '\0';
    }

    printf("Ma the sinh vien: %s\n", maTheSinhVien);
    return 0;
}
