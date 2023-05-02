#include "thuvien.h"

int main() {
    const int so = 10;
    int a = so;
    int b = so;
    int c[a][10];
    nhap(a, b);
    nhap_mang(c, a, b);
    xuat_mang(c, a, b);

    int cot1, cot2, dong1, dong2, tong_bien;
    hoan_doi_cot(c, a, cot1, cot2);
    xuat_mang(c, a, b);
    hoan_doi_dong(c, a, dong1, dong2);
    xuat_mang(c, a, b);

    tong_gia_tri_bien(c, a, tong_bien);

    tinh_trung_binh_cheo_largest(c, a);
    tinh_trung_binh_cheo_smallest(c, a);

    tong_tam_giac_cheo_largest(c, a);
    tong_tam_giac_cheo_smallest(c, a);
}
