#include"Sort.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//sua thuat toan tim kiem thep ten
//gom code lai dung chung 1 ham 
void sapXepTheoHoTen(SV ds[], int slsv) {
	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = slsv - 1; j > i; j--) {
			// strcmp ham so sanh 2 chuoi return (0 -> chuoi1 = chuoi2), return (>0 -> 2 chuoi1 > chuoi2), return (<0 -> 2 chuoi1 < chuoi2)
			if (strcmp(ds[j].ten, ds[j - 1].ten) < 0) {
				SV sv = ds[j];
				ds[j] = ds[j - 1];
				ds[j - 1] = sv;
			}
		}
	}
	printf("\nDANH SACH SINH VIEN SAU KHI SAP XEP HO TEN");
	xuatDanhSachSinhVien(ds, slsv);
}
void sapXepTheoNamSinhTuThapDenCao(SV ds[], int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].namSinh > ds[j].namSinh) {
				SV sv = ds[i];
				ds[i] = ds[j];
				ds[j] = sv;
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}
void sapXepTheoDiemDauVaoTuThapDenCao(SV ds[], int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].diemDauvao > ds[j].diemDauvao) {
				SV sv = ds[i];
				ds[i] = ds[j];
				ds[j] = sv;
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}
void sapXepTheoDiemTichLuyTuThapDenCao(SV ds[], int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].diemTichluy > ds[j].diemTichluy) {
				SV sv = ds[i];
				ds[i] = ds[j];
				ds[j] = sv;
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}