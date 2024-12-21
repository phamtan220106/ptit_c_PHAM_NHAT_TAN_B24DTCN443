/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 10
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int M, N;
    float *data;

    file = fopen("tst1004.fpl", "rb");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1;
    }

    fread(&M, sizeof(int), 1, file);
    fread(&N, sizeof(int), 1, file);

    int totalElements = M * N;
    data = (float *)malloc(totalElements * sizeof(float));
    if (data == NULL) {
        printf("Khong cap phat duoc bo nho.\n");
        fclose(file);
        return 1;
    }

    fread(data, sizeof(float), totalElements, file);
    fclose(file);

    float sum = 0;
    for (int i = 0; i < totalElements; i++) {
        sum += data[i];
    }

    printf("Tong cua cac so thuc: %.2f\n", sum);

    free(data);

    return 0;
}
