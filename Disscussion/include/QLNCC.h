#include "NhaCungCap.h"
#include <iostream>
#include <string>

using namespace std;

void QLNCCMenu(){
    NhaCungCap ncc;
    int choice;
    ncc.docNCC();
        do{
            cout << "1. Them nha cung cap" << endl;
            cout << "2. Xoa nha cung cap" << endl;
            cout << "3. Sua nha cung cap" << endl;
            cout << "4. Hien thi danh sach nha cung cap" << endl;
            cout << "5. Tim kiem nha cung cap" << endl;
            cout << "6. Luu thong tin" << endl;
            cout << "0. Thoat: "<< endl;
            cout << "Nhap lua chon: ";
            cin >> choice;
            switch(choice){
                case 1:
                    ncc.themNCC();
                    break;
                case 2:
                    ncc.xoaNCC();
                    break;
                case 3:
                    ncc.suaNCC();
                    break;
                case 4:
                    ncc.hienThidanhsachNCC();
                    break;
                case 5:
                    ncc.timKiemNCC();
                    break;
                case 6:
                    ncc.luuNCC();
                    break;
                case 0:
                    cout <<"            "<<"-------------------------" << endl;
                    cout <<"            "<<"| Ket thuc chuong trinh |" << endl;
                    cout <<"            "<<"-------------------------" << endl;
                    break;
                default:
                    cout <<"            "<<"-------------------------" << endl;
                    cout <<"            "<<"| Lua chon khong hop le!|" << endl;
                    cout <<"            "<<"-------------------------" << endl;
                    break;
            }
    }while(choice != 0);
}
