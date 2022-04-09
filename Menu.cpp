#include "Menu.h"
using namespace std;
void menu::authorization()
{
	cout << "\tПродажа автобусных билетов" << endl;
	cout << "\t\tМеню авторизации" << endl;
	cout << "\t(1) ~ Войти под существующим аккаунтом" << endl;
	cout << "\t(2) ~ Регистрация" << endl;
	cout << "\t(3) ~ Выход из программы" << endl;
	cout << "Ваш выбор: ";
}
void menu:: admin() {
	cout << "\t\tГлавное меню(ADMIN)" << endl;
	cout << "\t(1) ~ Добавить запись" << endl;
	cout << "\t(2) ~ Редактировать запись" << endl;
	cout << "\t(3) ~ Просмотр данных в табличном виде" << endl;
	cout << "\t(4) ~ Удалить запись" << endl;
	cout << "\t(5) ~ Cортировка по номеру рейса" << endl;
	cout << "\t(6) ~ Управление пользователями" << endl;
	cout << "\t(7) ~ Изменить пароль" << endl;
	cout << "\t(8) ~ Выход" << endl;
	cout << "Ваш выбор: ";
}
void menu::vibor_menu(){
	cout << "\t\tВыбор меню" << endl;
	cout << "\tУ вас есть роль администратора,выберете подходящее меню" << endl;
	cout << "\t(1) ~ ADMIN-MENU" << endl;
	cout << "\t(2) ~ USER-MENU" << endl;
	cout << "\t(3) ~ Вернуться к авторизации" << endl;
	cout << "\t(4) ~ Выход" << endl;
	cout << "Ваш выбор: ";
}
void menu::user() {
	cout << "\t\tГлавное меню(USER)" << endl;
	cout << "\t(1) ~ Просмотр информации в табличном виде" << endl;
	cout << "\t(2) ~ Купить билеты" << endl;
	cout << "\t(3) ~ Сформировать отчет" << endl;
	cout << "\t(4) ~ Изменить пароль" << endl;
	cout << "\t(5) ~ Выход" << endl;
	cout << "Ваш выбор: ";
}
void menu::change_tickets() {
	cout << "\t\tЧто вы хотите изменить?" << endl;
	cout << "\t(1) ~ Полностью данную запись" << endl;
	cout << "\t(2) ~ Номер рейса" << endl;
	cout << "\t(3) ~ Место отправления" << endl;
	cout << "\t(4) ~ Место прибытия" << endl;
	cout << "\t(5) ~ Время отправления" << endl;
	cout << "\t(6) ~ Время прибытия" << endl;
	cout << "\t(7) ~ Число билетов" << endl;
	cout << "\t(8) ~ Цена билета" << endl;
	cout << "\t(9) ~ Выход в меню" << endl;
	cout << "Ваш выбор: ";
}
void menu::controlUsers()
{
	cout << "Меню управление пользователями" << endl;
	cout << "(1) ~ Добавить администратора" << endl;
	cout << "(2) ~ Добавить пользователя" << endl;
	cout << "(3) ~ Удалить пользователя" << endl;
	cout << "(4) ~ Назад" << endl;
	cout << "Ваш выбор: ";
}