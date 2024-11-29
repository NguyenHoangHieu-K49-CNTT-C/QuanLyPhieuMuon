#include "Header.h"
#include "DanhSachPhieuMuon.h"
#include "PhieuMuon.h"
#include "DanhSachPhieuMuon.cpp"
#include "Node.h"
#include "Node.cpp"
#include "LinkedList.h"
#include "LinkedList.cpp"
int main() {

    DanhSachPhieuMuon<PhieuMuon> dsPhieuMuon;

    dsPhieuMuon.docFile("PhieuMuon.txt");

    int choice;
    do {
        setColor(3);
        cout << "\n\t\t\t\t\t QUAN LY PHIEU MUON SACH \n" << endl;
        setColor(2);
        cout << "\t\t\t\t1. Xuat danh sach phieu muon ra man hinh" << endl;
        cout << "\t\t\t\t2. Muon sach" << endl;
        cout << "\t\t\t\t3. Tra sach" << endl;
        cout << "\t\t\t\t0. Thoat" << endl;
        cout << "\t\t\t\tNhap lua chon: ";
        cin >> choice;
        switch (choice) {

            case 1: {
                system("cls");
                setColor(4);
                dsPhieuMuon.xuatConsole();
                break;
            }
            case 2: {
                system("cls");
                setColor(4);
                dsPhieuMuon.muon();
                system("pause");
                system("cls");
                break;
            }
            case 3: {
                system("cls");
                dsPhieuMuon.tra();

                break;
            }
            case 0: {
                cout << "\t\t\t\tKet thuc chuong trinh." << endl;
                break;
            }
            default: {
                cout << "\t\t\t\tLua chon khong hop le. Vui long thu lai." << endl;
            }
        }
    } while (choice != 0);

    return 0;
}