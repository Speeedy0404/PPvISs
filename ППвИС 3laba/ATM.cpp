#include "ATM.h"

Card::Card()
{
    bank_name = number_card = cardholder_name = validity = "";
}

Card::Card(int number)
{
    string file_of_card = "Card_", temp;
    file_of_card += number + '0';
    file_of_card += ".txt";
    ifstream input(file_of_card);
    int count = 0;
    getline(input, bank_name);
    getline(input, number_card);
    getline(input, cardholder_name);
    getline(input, validity);
    input.close();
}

Card_in_base::Card_in_base()
{
    pincode = "";
    cash = 0;
}

Bank::Bank() {
    ifstream input("Database.txt");
    string tamp;
    while (getline(input, tamp)) {
        if (tamp == "//") {
            Card_in_base tamplate_card;
            getline(input, tamp);
            tamplate_card.set_bank_name(tamp);
            getline(input, tamp);
            tamplate_card.set_number_card(tamp);
            getline(input, tamp);
            tamplate_card.set_cardholder_name(tamp);
            getline(input, tamp);
            tamplate_card.set_validity(tamp);
            getline(input, tamp);
            tamplate_card.set_pincode(tamp);
            getline(input, tamp);
            tamplate_card.set_cash(atoi(tamp.c_str()));
            database.push_back(tamplate_card);
        }
    }
    input.close();
}

void Session::initialization()
{
    for (; position_of_card < tamplate_bank.get_size_of_database(); position_of_card++)
        if (tamplate_bank.get_bank_name(position_of_card) == tamplate_card.get_bank_name() &&
            tamplate_bank.get_number_card(position_of_card) == tamplate_card.get_number_card() &&
            tamplate_bank.get_cardholder_name(position_of_card) == tamplate_card.get_cardholder_name() &&
            tamplate_bank.get_validity(position_of_card) == tamplate_card.get_validity())break;

    if (position_of_card == tamplate_bank.get_size_of_database())throw Initialization_error("����� �� �������");
}

void Session::get_pincode()
{
    int attempt = 3;
    string attempt_pincode;
    while (true) {
        system("cls");
        if (!attempt)throw Enter_code_error("��� ������� ���������");
        cout << "Enter code (attempts left " << attempt << "):\n";
        cin >> attempt_pincode;
        if (attempt_pincode == tamplate_bank.get_pincode(position_of_card))
            return;
        attempt--;
    }
}

int& Session::put_money()
{
    cout << "������� ����� �����\n";
    string number_of_card;
    cin >> number_of_card;
    int position_of_seconde_card = 0;

    for (; position_of_seconde_card < tamplate_bank.get_size_of_database(); position_of_seconde_card++)
        if (tamplate_bank.get_number_card(position_of_seconde_card) == number_of_card)break;

    if (position_of_seconde_card == tamplate_bank.get_size_of_database())throw Initialization_error("����� �� �������");

    return tamplate_bank.get_cash(position_of_seconde_card);
}

void Session::check_balanse()
{
    cout << "���� : " << tamplate_bank.get_bank_name(position_of_card) << endl;
    cout << "����� ����� : " << tamplate_bank.get_number_card(position_of_card) << endl;
    cout << "��� ������������ : " << tamplate_bank.get_cardholder_name(position_of_card) << endl;
    cout << "������ : " << tamplate_bank.get_cash(position_of_card) << endl;
}

void Session::end_of_session()
{
    ofstream output("Database.txt");
    for (int i = 0; i < tamplate_bank.get_size_of_database(); i++) {
        output << "//\n";
        output << tamplate_bank.get_bank_name(i) << endl;
        output << tamplate_bank.get_number_card(i) << endl;
        output << tamplate_bank.get_cardholder_name(i) << endl;
        output << tamplate_bank.get_validity(i) << endl;
        output << tamplate_bank.get_pincode(i) << endl;
        output << tamplate_bank.get_cash(i) << endl;
    }
    output.close();
}

int Options::display()
{
    system("cls");
    int chose;
    cout << "����� ����� �������� ������� 1\n";
    cout << "����� ��������� �������� �� ����� �������� ������� 2\n";
    cout << "����� ��������� �������� �� ������ ����� ������� 3\n";
    cout << "����� ����������� ������ ������� 4\n";
    cin >> chose;
    return chose;
}

void Options::processing(Session& session)
{
    char chose;
    do {
        try {
            switch (display()) {
            case 1:withdraw_funds(session); break;
            case 2:withdraw_funds_for_phone(session); break;
            case 3: withdraw_funds_for_any_card(session); break;
            case 4: session.check_balanse(); break;
            }
        }
        catch (Initialization_error error) {
            Error_screen<Initialization_error> error_screen(error);
        }
        catch (Enter_code_error error) {
            Error_screen<Enter_code_error> error_screen(error);
        }
        catch (Cash_error error) {
            Error_screen<Cash_error> error_screen(error);
        }
        cout << "������� ����������?(y/n)\n";
        cin >> chose;
    } while (chose == 'y');
}

int �heck::display()
{
    cout << "���������� ��� ? (y/n)\n";
    char chose;
    cin >> chose;
    system("cls");
    if (chose == 'y')return 1;
    return 0;
}

void �heck::print_a_check(Session& session)
{
    if (display()) {
        ofstream output("Check.txt");
        output << "\n--------------------\n\n";
        output << "Bank : " << session.get_bank_name() << endl;
        output << "Number of card : " << session.get_number_card() << endl;
        output << "Cardholder name : " << session.get_cardholder_name() << endl;
        output << "Cash : " << session.get_cash() << endl;
        output.close();
    }
}

void Options::withdraw_funds(Session& session)
{
    int sum;
    cout << "������� �����: "; cin >> sum;
    if (sum > session.get_cash())throw Cash_error("������������ �������. ������� ���� : ", session.get_cash());
    session.withdraw_money(sum);
    cout << "�������� ��������� �������\n";
}

void Options::withdraw_funds_for_phone(Session& session)
{
    cout << "������� ����� �������� : +375 ";
    string phone_number;
    cin >> phone_number;
    session.get_pincode();
    int sum;
    cout << "������� �����: "; cin >> sum;
    if (sum > session.get_cash())throw Cash_error("������������ �������. ������� ���� : ", session.get_cash());
    session.withdraw_money(sum);
    cout << "�������� ��������� �������\n";
}

void Options::withdraw_funds_for_any_card(Session& session)
{
    int& another_score = session.put_money();
    if (another_score >= 0) {
        int sum;
        cout << "������� �����: "; cin >> sum;
        if (sum > session.get_cash())throw Cash_error("������������ �������. ������� ���� : ", session.get_cash());
        session.get_pincode();
        another_score += sum;
        session.withdraw_money(sum);
        cout << "�������� ��������� �������\n";
    }
}

template<class Temp_error>
inline void Error_screen<Temp_error>::display()
{
    cout << error.set_type_error() << endl;
    cout << error.set_massege() << endl;
    puts("\n������� ����� ������� ����� ����������...");
    _getch();
}