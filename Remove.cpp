#include"Remove.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void xoaSinhVienTheoTen(SV ds[], int& n) {
	char ten[20];//test neu nhaap >20 ki tu thi bi loi -> sua lai
	printf("\nNhap ten cua sinh vien can xoa: ");
	while (getchar() == 'n');
	gets_s(ten);
	for (int i = 0; i < n; i++) {
		if (strstr(ds[i].ten, ten)) {
			for (int j = i; j < n; j++) {
				ds[j] = ds[j + 1];
			}
			n -= 1;
			printf("\n Xoa thanh cong");
			return;
		}
	}
}