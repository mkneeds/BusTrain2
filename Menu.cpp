#include "Menu.h"
using namespace std;
void menu::authorization()
{
	cout << "\t������� ���������� �������" << endl;
	cout << "\t\t���� �����������" << endl;
	cout << "\t(1) ~ ����� ��� ������������ ���������" << endl;
	cout << "\t(2) ~ �����������" << endl;
	cout << "\t(3) ~ ����� �� ���������" << endl;
	cout << "��� �����: ";
}
void menu:: admin() {
	cout << "\t\t������� ����(ADMIN)" << endl;
	cout << "\t(1) ~ �������� ������" << endl;
	cout << "\t(2) ~ ������������� ������" << endl;
	cout << "\t(3) ~ �������� ������ � ��������� ����" << endl;
	cout << "\t(4) ~ ������� ������" << endl;
	cout << "\t(5) ~ C��������� �� ������ �����" << endl;
	cout << "\t(6) ~ ���������� ��������������" << endl;
	cout << "\t(7) ~ �������� ������" << endl;
	cout << "\t(8) ~ �����" << endl;
	cout << "��� �����: ";
}
void menu::vibor_menu(){
	cout << "\t\t����� ����" << endl;
	cout << "\t� ��� ���� ���� ��������������,�������� ���������� ����" << endl;
	cout << "\t(1) ~ ADMIN-MENU" << endl;
	cout << "\t(2) ~ USER-MENU" << endl;
	cout << "\t(3) ~ ��������� � �����������" << endl;
	cout << "\t(4) ~ �����" << endl;
	cout << "��� �����: ";
}
void menu::user() {
	cout << "\t\t������� ����(USER)" << endl;
	cout << "\t(1) ~ �������� ���������� � ��������� ����" << endl;
	cout << "\t(2) ~ ������ ������" << endl;
	cout << "\t(3) ~ ������������ �����" << endl;
	cout << "\t(4) ~ �������� ������" << endl;
	cout << "\t(5) ~ �����" << endl;
	cout << "��� �����: ";
}
void menu::change_tickets() {
	cout << "\t\t��� �� ������ ��������?" << endl;
	cout << "\t(1) ~ ��������� ������ ������" << endl;
	cout << "\t(2) ~ ����� �����" << endl;
	cout << "\t(3) ~ ����� �����������" << endl;
	cout << "\t(4) ~ ����� ��������" << endl;
	cout << "\t(5) ~ ����� �����������" << endl;
	cout << "\t(6) ~ ����� ��������" << endl;
	cout << "\t(7) ~ ����� �������" << endl;
	cout << "\t(8) ~ ���� ������" << endl;
	cout << "\t(9) ~ ����� � ����" << endl;
	cout << "��� �����: ";
}
void menu::controlUsers()
{
	cout << "���� ���������� ��������������" << endl;
	cout << "(1) ~ �������� ��������������" << endl;
	cout << "(2) ~ �������� ������������" << endl;
	cout << "(3) ~ ������� ������������" << endl;
	cout << "(4) ~ �����" << endl;
	cout << "��� �����: ";
}