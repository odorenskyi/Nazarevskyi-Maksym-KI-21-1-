#include <iostream>
#include <fstream>

#include "struct_type_project_5.h"
#include "Modules_Berestenko.h"
#include "Modules_Nazarevskiy.h"
#include "Modules_Lisevich.h"


using namespace std;


int main()
{
    system("chcp 1251 & cls");
    vector<data> database;
    string filename;
    filename = "database.dat";
    loadDatabase(database,filename);
    do {
        cout << "������� �� ��� ������ ��������: "<<endl;
        cout << "1 - ��������� �������� � �������" << endl
             << "2 - ������ ���������� � �������" << endl
             << "3 - ����� ���������� � ��������" << endl
             << "4 - ��������� ���������� � ��������" << endl
             << "5 - ���������� ���������� � �������� �� �������� ��������" << endl
             << "������ ���� 䳿: ";
        int option = 0;
        if (!(cin >> option)) {
            cin.clear();
            cin.ignore();
        }
        string city;
        int code = 0;
        switch (option) {
            case 1:
                print_database(database);
                break;
            case 2:
                append_data(database);
                break;
            case 3:
                cout << "������ ����� ���� ���������� ����� �� ������ ������: " << endl << ">>> ";
                cin >> city;
                search_data(database, city);
                break;
            case 4:
                cout << "������ ����� ���� ���������� ��� ��� �� ������ ��������: " << endl << ">>> ";
                while (!(cin >> city)) {
                    cin.clear();
                    cin.ignore();
                }
                remove_data(database, city);
                break;
            case 5:
                saveDatabase(database,filename);
                return 0;
            default:
                continue;
        }
        system("pause");
        system("cls");
    } while(true);
}
