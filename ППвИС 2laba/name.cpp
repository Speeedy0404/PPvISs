#include "name.h"
void animal::Cheiroptera::view()
{
	setlocale(LC_ALL, "ru");
	cout << "Летучая мышь \n";
	cout << "Ориал обитания : " << set_orial_habitat() << endl;
	cout << "Долгожительность лет : " << set_long_of_life() << endl;
	cout << "Покров : " << set_cover() << endl;
	cout << "Масса в граммах : " << set_weight() << endl;
	cout << "Крылья : " << set_wings() << endl;
	cout << "Перьевой покров : " << set_feather_cover() << endl;
	cout << "Адаптация зубов : " << set_adaptability_of_teeth_for_meat() << endl;
	cout << "Когти : " << set_strong_claws() << endl;
}

void animal::Penguins::view()
{
	cout << "Пингвин \n";
	cout << "Ориал обитания : " << orial_habitat << endl;
	cout << "Долгожительность лет : " << long_of_life << endl;
	cout << "Покров : " << cover << endl;
	cout << "Масса в килограммах : " << weight << endl;
	cout << "Крылья : " << wings << endl;
	cout << "Перьевой покров : " << feather_cover << endl;
	cout << "Адаптация зубов : " << adaptability_of_teeth_for_meat << endl;
	cout << "Когти : " << strong_claws << endl;
	cout << "Мускулатура : " << musculature << endl;
	cout << "Лапы : " << feet_with_a_swimming_membrane << endl;
}

void animal::Sharks::view()
{
	cout << "Акулы\n";
	cout << "Ориал обитания : " << orial_habitat << endl;
	cout << "Долгожительность лет : " << long_of_life << endl;
	cout << "Покров : " << cover << endl;
	cout << "Масса в килограммах : " << weight << endl;
	cout << "Чешуя : " << scaly_cover << endl;
	cout << "Плавники : " << fins << endl;
	cout << "Адаптация зубов : " << adaptability_of_teeth_for_meat << endl;
	cout << "Когти : " << strong_claws << endl;
	cout << "Форма тела : " << body_is_torpedo_shaped << endl;
	cout << "Зубы : " << lost_of_sharp_teeth << endl;
}

void animal::Parrot::view()
{
	cout << "Попугай\n";
	cout << "Ориал обитания : " << orial_habitat << endl;
	cout << "Долгожительность лет : " << long_of_life << endl;
	cout << "Покров : " << cover << endl;
	cout << "Масса в граммах : " << weight << endl;
	cout << "Крылья : " << wings << endl;
	cout << "Перьевой покров : " << feather_cover << endl;
	cout << "Адаптация зубов : " << adaptability_of_teeth_for_grass << endl;
	cout << "Расположение глаз: " << location_of_the_eye << endl;
	cout << "Цвет тела : " << bright_colouring << endl;
	cout << "Хвост и перья : " << long_tails_and_tufts << endl;
}