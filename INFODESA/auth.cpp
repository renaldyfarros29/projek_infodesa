#include "infodesa.h"
#include "style.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

string inputPassword();

void registrasiUser(vector<Users>& daftarUser, const vector<Penduduk>& daftarPenduduk) {
    string inpUsername, inpPasswd, inpNama;
    int pilihanRole;

    system("cls");
    cout << CYAN << BOLD << "\n  ======================================\n";
    cout << "  ||         F O R M   D A F T A R      ||\n";
    cout << "  ======================================\n" << RESET;

    cout << "\n  " << BOLD << "Pilih Jenis Akun:" << RESET << "\n";
    cout << "  1. Perangkat Desa\n  2. Warga\n  3. Kembali\n";

    while (true) {
        cout << "  " << BOLD << "Pilihan (1-3): " << RESET;
        cin >> pilihanRole;
        if (pilihanRole == 3) return;
        if (cin.fail() || (pilihanRole != 1 && pilihanRole != 2)) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << RED << "  [ERROR] Pilihan tidak valid!\n" << RESET;
        }
        else break;
    }

    cin.ignore();
    cout << "\n  " << BOLD << "Username (NIK): " << RESET;
    getline(cin, inpUsername);
    while (inpUsername.empty()) { cout << RED << "  [!] NIK tidak boleh kosong! Masukkan: " << RESET; getline(cin, inpUsername); }

    // Cek Kependudukan
    bool nikTerdaftar = false;
    for (size_t i = 0; i < daftarPenduduk.size(); i++) {
        if (daftarPenduduk[i].NIK == inpUsername) { nikTerdaftar = true; break; }
    }

    if (!nikTerdaftar) {
        cout << RED << "\n  [GAGAL] NIK tidak ditemukan di database desa!\n" << RESET;
        system("pause"); return;
    }

    // Cek Duplikasi Akun
    for (size_t i = 0; i < daftarUser.size(); i++) {
        if (daftarUser[i].username == inpUsername) {
            cout << RED << "\n  [GAGAL] NIK sudah terdaftar sebagai user!\n" << RESET;
            system("pause"); return;
        }
    }

    cout << "  Nama Lengkap  : "; getline(cin, inpNama);
    while (inpNama.empty()) { cout << RED << "  [!] Nama kosong! Masukkan: " << RESET; getline(cin, inpNama); }

    cout << "  Password      : "; getline(cin, inpPasswd);
    while (inpPasswd.empty()) { cout << RED << "  [!] Password kosong! Masukkan: " << RESET; getline(cin, inpPasswd); }

    bool statusApprove = (pilihanRole == 2);
    daftarUser.push_back({ inpNama, inpUsername, inpPasswd, (pilihanRole == 1) ? PerangkatDesa : Warga, statusApprove });

    cout << (pilihanRole == 1 ? YELLOW : GREEN) << BOLD << "\n  [INFO] Registrasi berhasil! "
        << (pilihanRole == 1 ? "Menunggu verifikasi admin." : "Silakan login.") << "\n\n" << RESET;
    system("pause");
}

//login
Role loginUser(const vector<Users>& daftarUser, string& namaLogin, string& usernameLogin) {
    string inpUsername, inpPasswd;

    system("cls");
    cout << BLUE << BOLD << "\n  ======================================\n";
    cout << "  ||         P O R T A L   L O G I N    ||\n";
    cout << "  ======================================\n" << RESET;

    // Bersihkan buffer sebelum membaca input login
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n  " << BOLD << "Username (NIK) : " << RESET;
    getline(cin, inpUsername);
    cout << "  " << BOLD << "Password       : " << RESET;
    inpPasswd = inputPassword();

    for (size_t i = 0; i < daftarUser.size(); i++) {
        if (inpUsername == daftarUser[i].username) {
            if (inpPasswd == daftarUser[i].passwd) {
                if (!daftarUser[i].isApproved) {
                    cout << YELLOW << "\n  [TUNGGU] Akun masih dalam status PENDING.\n" << RESET;
                    system("pause"); return GagalLogin;
                }
                namaLogin = daftarUser[i].name;
                usernameLogin = daftarUser[i].username;
                return daftarUser[i].level;
            }
            cout << RED << "\n  [GAGAL] Password salah!\n" << RESET;
            system("pause"); return GagalLogin;
        }
    }

    cout << RED << "\n  [GAGAL] User tidak ditemukan!\n" << RESET;
    system("pause");
    return GagalLogin;
}

string inputPassword() {
    string passwd = "";
    char ch;

    while (true) {
        ch = _getch();

        if (ch == 13) {
            cout << endl;
            break;
        }

        else if (ch == 8) {
            if (passwd.length() > 0) {
                passwd.pop_back(); 
                cout << "\b \b";  
            }
        }
   
        else {
            passwd += ch;
            cout << (char)254;
        }
    }
    return passwd;
}