#include "name.h"
void animal::Cheiroptera::view()
{
	setlocale(LC_ALL, "ru");
	cout << "������� ���� \n";
	cout << "����� �������� : " << set_orial_habitat() << endl;
	cout << "���������������� ��� : " << set_long_of_life() << endl;
	cout << "������ : " << set_cover() << endl;
	cout << "����� � ������� : " << set_weight() << endl;
	cout << "������ : " << set_wings() << endl;
	cout << "�������� ������ : " << set_feather_cover() << endl;
	cout << "��������� ����� : " << set_adaptability_of_teeth_for_meat() << endl;
	cout << "����� : " << set_strong_claws() << endl;
}

void animal::Penguins::view()
{
	cout << "������� \n";
	cout << "����� �������� : " << orial_habitat << endl;
	cout << "���������������� ��� : " << long_of_life << endl;
	cout << "������ : " << cover << endl;
	cout << "����� � ����������� : " << weight << endl;
	cout << "������ : " << wings << endl;
	cout << "�������� ������ : " << feather_cover << endl;
	cout << "��������� ����� : " << adaptability_of_teeth_for_meat << endl;
	cout << "����� : " << strong_claws << endl;
	cout << "����������� : " << musculature << endl;
	cout << "���� : " << feet_with_a_swimming_membrane << endl;
}

void animal::Sharks::view()
{
	cout << "�����\n";
	cout << "����� �������� : " << orial_habitat << endl;
	cout << "���������������� ��� : " << long_of_life << endl;
	cout << "������ : " << cover << endl;
	cout << "����� � ����������� : " << weight << endl;
	cout << "����� : " << scaly_cover << endl;
	cout << "�������� : " << fins << endl;
	cout << "��������� ����� : " << adaptability_of_teeth_for_meat << endl;
	cout << "����� : " << strong_claws << endl;
	cout << "����� ���� : " << body_is_torpedo_shaped << endl;
	cout << "���� : " << lost_of_sharp_teeth << endl;
}

void animal::Parrot::view()
{
	cout << "�������\n";
	cout << "����� �������� : " << orial_habitat << endl;
	cout << "���������������� ��� : " << long_of_life << endl;
	cout << "������ : " << cover << endl;
	cout << "����� � ������� : " << weight << endl;
	cout << "������ : " << wings << endl;
	cout << "�������� ������ : " << feather_cover << endl;
	cout << "��������� ����� : " << adaptability_of_teeth_for_grass << endl;
	cout << "������������ ����: " << location_of_the_eye << endl;
	cout << "���� ���� : " << bright_colouring << endl;
	cout << "����� � ����� : " << long_tails_and_tufts << endl;
}