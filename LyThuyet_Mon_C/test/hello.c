#include <stdio.h>

int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Chuoi ban vua nhap la: %s", str);
    return 0;
}
