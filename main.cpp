#include "thuvien.h"

int main() {
    const int so = 10;
    int a = so;
    int b = so;
    int c[so][10];
    nhap(a, b);
    nhap_mang(c, a, b);
    xuat_mang(c, a, b);

    int cot1, cot2, dong1, dong2,
            tong_bien, tbchinh, tbphu,
            tong1, tong2, tong3, tong4,
            tongdong1, tongdong2, tongdong3,
            tongcot1, tongcot2, tongcot3;
//    hoan_doi_cot(c, a, cot1, cot2);
//    xuat_mang(c, a, b);
//    hoan_doi_dong(c, a, dong1, dong2);
//    xuat_mang(c, a, b);
//
    tong_gia_tri_bien(c, a, tong_bien);

    tinh_trung_binh_cheo_lon_nhat(c, a);
    tinh_trung_binh_cheo_nho_nhat(c, a);

    tong_tam_giac_cheo_lon_nhat(c, a);
    tong_tam_giac_cheo_nho_nhat(c, a);

    tong_dong_max(c, a, tongdong1, tongdong2, tongdong3);
    tong_cot_max(c, a, tongcot1, tongcot2, tongcot3);
}
