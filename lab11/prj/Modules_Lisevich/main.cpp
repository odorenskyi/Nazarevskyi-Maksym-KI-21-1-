#include <iostream>
#include <fstream>
#include <vector>
#include "struct_type_project_5.h"

using namespace std;

void remove_data(vector<data> &database,string city){
    auto iter = database.cbegin();
    for(int i = 0; i < database.size(); i++){
        if(database[i].city == city){
            database.erase(iter + i);

            cout << "����� ��������" << endl;

            return;
        }
    }
    cout << "����� �� ��������" << endl;
}


void append_data(vector<data> &database){
    data phone_code;
    cout << "������ ����� ����: ";
    cin >> phone_code.city;
    cout << "������ ��������� ��� ����: ";
    cin >> phone_code.code;
    database.push_back(phone_code);
}
