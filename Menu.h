#pragma once
#include <iostream>
#include <locale>
#include <Windows.h>
#include <fstream>
#include "proverki.h"
#include <io.h>
#include<vector>
#include <algorithm>
#include <iomanip>
#include "Table.h"
#include <string>

void primary_authorization();
void auth();
void signup();
void admin_menu();
void admin();
void user();
void addInformation();
void changeInformation();
void showInormatiom();
void delInformation();
void sort();
void change_user();
void addUser();
void addAdmin();
void deleteUser();
void changePassword();
void buyPass();
void otchet();
namespace menu {
	void authorization();
	void admin();
	void vibor_menu();
	void user();
	void change_tickets();
	void controlUsers();
}
