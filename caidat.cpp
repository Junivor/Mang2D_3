#include "thuvien.h"
void nhap(int &m, int &n) {
    do {
        cout << "Nhap chieu dai mang b[m][]: ";
        cin >> m;
        cout << "Nhap chieu cao mang b[][n]: ";
        cin >> n;
    } while (m <= 0 && n <= 0);
    cout << "Do dai va chieu cao mang ban vua nhap la: b[" << m << "][" << n << "]" << endl;
}

void nhap_mang(int b[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap b[" << i + 1 << "][" << j + 1 << "]" << endl;
            cin >> b[i][j];
        }
    }
}

void xuat_mang(int b[][10], int m, int n) {
    cout << "Mang ban vua nhap co du lieu la: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

//void hoan_doi_cot(int b[][10], int m, int cot1, int cot2) {
//    cout << "Nhap hai cot can hoan doi (0-based index): ";
//    cin >> cot1 >> cot2;
//    for (int i = 0; i < m; i++) {
//        int temp = b[i][cot1];
//        b[i][cot1] = b[i][cot2];
//        b[i][cot2] = temp;
//    }
//    cout << "Mang sau khi hoan doi cot:\n" ;
//}
//
//void hoan_doi_dong(int b[][10], int m, int dong1, int dong2) {
//    cout << "Nhap hai dong can hoan doi (0-based index): ";
//    cin >> dong1 >> dong2;
//    for (int j = 0; j < m; j++) {
//        int temp = b[dong1][j];
//        b[dong1][j] = b[dong2][j];
//        b[dong2][j] = temp;
//    }
//    cout << "Mang sau khi hoan doi dong:\n";
//}
//
void tong_gia_tri_bien(int b[][10], int m, int &tong_bien) {
    tong_bien = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == m - 1) {
                tong_bien += b[i][j];
            }
        }
    }

    cout << ">>tong_bien gia tri bien cua mang: " << tong_bien << endl;
    cout << "\n";
}

void tinh_trung_binh_cheo_lon_nhat(int b[][10], int m) {
    double tb_cheo_chinh = 0, tb_cheo_phu = 0;

    for (int i = 0; i < m; i++) {
        tb_cheo_chinh += b[i][i];
        tb_cheo_phu += b[i][m - 1 - i];
    }

    tb_cheo_chinh /= m;
    tb_cheo_phu /= m;

    cout << "Trung binh cheo chinh: " << tb_cheo_chinh << endl;
    cout << "Trung binh cheo phu: " << tb_cheo_phu << endl;

    if (tb_cheo_chinh > tb_cheo_phu) {
        cout << ">>Duong cheo chinh co tong lon hon" << endl;
    } else if (tb_cheo_chinh < tb_cheo_phu) {
        cout << ">>Duong cheo phu co tong lon hon" << endl;
    } else {
        cout << ">>Duong cheo chinh va duong cheo phu co cung tong" << endl;
    }
    cout << "\n";
}

void tinh_trung_binh_cheo_nho_nhat(int b[][10], int m) {
    double tb_cheo_chinh = 0, tb_cheo_phu = 0;

    for (int i = 0; i < m; i++) {
        tb_cheo_chinh += b[i][i];
        tb_cheo_phu += b[i][m - 1 - i];
    }

    tb_cheo_chinh /= m;
    tb_cheo_phu /= m;

    cout << "Trung binh cheo chinh: " << tb_cheo_chinh << endl;
    cout << "Trung binh cheo phu: " << tb_cheo_phu << endl;

    if (tb_cheo_chinh < tb_cheo_phu) {
        cout << ">>Duong cheo chinh co tong nho hon" << endl;
    } else if (tb_cheo_chinh > tb_cheo_phu) {
        cout << ">>Duong cheo phu co tong nho hon" << endl;
    } else {
        cout << ">>Duong cheo chinh va duong cheo phu co cung tong" << endl;
    }
    cout << "\n";
}

void tong_tam_giac_cheo_lon_nhat(int b[][10], int m) {
    int tong1 = 0, tong2 = 0, tong3 = 0, tong4 = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i <= j) {
                tong1 += b[i][j]; // Tam giác trên chéo chính: i <= j
            }
            if (i + j <= m - 1) {
                tong2 += b[i][j]; // Tam giác trên chéo phụ:  i + j <= m - 1
            }
            if (i >= j) {
                tong3 += b[i][j]; // Tam giác dưới chéo chính: i >= j
            }
            if (i + j >= m - 1) {
                tong4 += b[i][j]; // Tam giác dưới chéo phụ: i + j >= n - 1
            }
        }
    }
    cout << "Tong tam giac tren cheo chinh: " << tong1 << "\n"
         << "Tong tam giac tren cheo phu: " << tong2 << "\n"
         << "Tong tam giac duoi cheo chinh: " << tong3 << "\n"
         << "Tong tam giac duoi cheo phu: " << tong4 << "\n";
    int largest_tong = max(max(tong1, tong2), max(tong3, tong4));
    cout << ">>Tong tam giac lon nhat: " << largest_tong << "\n\n";
}

void tong_tam_giac_cheo_nho_nhat(int b[][10], int m) {
    int tong1 = 0, tong2 = 0, tong3 = 0, tong4 = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i <= j) {
                tong1 += b[i][j]; // Tam giác trên chéo chính: i <= j
            }
            if (i + j <= m - 1) {
                tong2 += b[i][j]; // Tam giác trên chéo phụ:  i + j <= m - 1
            }
            if (i >= j) {
                tong3 += b[i][j]; // Tam giác dưới chéo chính: i >= j
            }
            if (i + j >= m - 1) {
                tong4 += b[i][j]; // Tam giác dưới chéo phụ: i + j >= n - 1
            }
        }
    }
    cout << "Tong tam giac tren cheo chinh: " << tong1 << "\n"
         << "Tong tam giac tren cheo phu: " << tong2 << "\n"
         << "Tong tam giac duoi cheo chinh: " << tong3 << "\n"
         << "Tong tam giac duoi cheo phu: " << tong4 << "\n";
    int smallest_tong = min(min(tong1, tong2), min(tong3, tong4));
    cout << ">>Tong tam giac nho nhat: " << smallest_tong << "\n\n";
}

