/*
Ho va ten: Pham Nhat Tan
Ma sinh vien: B24DTCN443
Bai 01
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

void displayDataTypes() {
    printf("Kieu du lieu      So bit    Gia tri nho nhat              Gia tri lon nhat\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("char              %2lu        %20d         %20d\n", sizeof(char) * 8, CHAR_MIN, CHAR_MAX);
    printf("unsigned char     %2lu        %20d         %20u\n", sizeof(unsigned char) * 8, 0, UCHAR_MAX);
    printf("short             %2lu        %20d         %20d\n", sizeof(short) * 8, SHRT_MIN, SHRT_MAX);
    printf("unsigned short    %2lu        %20u         %20u\n", sizeof(unsigned short) * 8, 0, USHRT_MAX);
    printf("int               %2lu        %20d         %20d\n", sizeof(int) * 8, INT_MIN, INT_MAX);
    printf("unsigned int      %2lu        %20u         %20u\n", sizeof(unsigned int) * 8, 0, UINT_MAX);
    printf("long              %2lu        %20ld        %20ld\n", sizeof(long) * 8, LONG_MIN, LONG_MAX);
    printf("unsigned long     %2lu        %20lu        %20lu\n", sizeof(unsigned long) * 8, 0, ULONG_MAX);
    printf("long long         %2lu        %20lld       %20lld\n", sizeof(long long) * 8, LLONG_MIN, LLONG_MAX);
    printf("unsigned long long%2lu        %20llu       %20llu\n", sizeof(unsigned long long) * 8, 0, ULLONG_MAX);
    printf("float             %2lu        %20.10e     %20.10e\n", sizeof(float) * 8, FLT_MIN, FLT_MAX);
    printf("double            %2lu        %20.10e     %20.10e\n", sizeof(double) * 8, DBL_MIN, DBL_MAX);
    printf("long double       %2lu        %20.10Le    %20.10Le\n", sizeof(long double) * 8, LDBL_MIN, LDBL_MAX);
}

int main() {
    displayDataTypes();
    return 0;
}
