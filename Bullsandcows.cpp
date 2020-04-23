
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>
using namespace std;



void Logo ()
{
    cout <<"  _____                                                          _____      _____     _____    ____            \n";
    cout <<   " |        |        |   |   /  |    /|      |    /|      |   /   /     \\    |     \\   /     \\  |    \\    |       |\n";
     cout <<  " |        |        |   |  /   |   / |      |   / |      |  /    |     |    |      |  |     |  |     |   |       |\n";
    cout <<   " |_____   |_____   |   | /    |  /  |      |  /  |      | /     |     |    |_____ /  |     |  |_____/   |_____  |\n";
   	cout << " |     \\  |     \\  |   | \\    | /   |      | /   |      | \\     |     |    |         |     |  |     \\   |     \\ |\n";
   cout <<       " |_____/  |_____/  |   |  \\   |/    |      |/    |      |  \\    \\_____/    |         \\_____/  |____ /   |_____/ |\n\n";




}

void Rules () // �������� �������
{
	cout <<"  _______    _____                ____                                     \n";
	cout <<" |       |  |     \\      /\\      |    \\    |    /|      /\\          /\\     \n";
	cout <<" |       |  |      |    /  \\     |     |   |   / |     /  \\        /  \\ \n";
	cout <<" |       |  |______/   /____\\    |_____/   |  /  |    /    \\      /____\\    \n";
	cout <<" |       |  |         /      \\   |     \\   | /   |   /      \\    /      \\  \n";
	cout <<" |       |  |        /        \\  |_____/   |/    |  /        \\  /        \\   \n";
	cout << endl;
    cout << endl;
    cout << "  | ���� � ����������� | \n" ;
    cout << endl;
    cout << "��������� ���������� ������ ��������������� ����� �� 0 �� 9. ����� ������ ����, ����� ������ ��� ����� � �� �������.";
    cout << endl;
	cout << "������ ��� ������� �� ������� ����. � ����� ��������� ���������� ����� ��������� ����, ������� �� ����� ������(����� ��-";
    cout << endl;
    cout << "���) � ����� ��������� ����, ������� �� �� ����� ������ (����� �����).";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << " | ���� ���� ������ ����� | \n ";
    cout << endl;
    cout << "������ �� ������� ������ ������ ����� � ���������������� �������. �����, ������� �������� ����, ������ ������ ���. ";
    cout << endl;
    cout << "��� - ��� ���� �������-, ����- ��� ������������� (� ����������� �� ������ ���������) ����� � ���������������� ������� ";
    cout << endl;
    cout << "�� ����� ��������� ���������� ����� � �����. ������ ������ ���� �� �������. ��������� ���, ��� ������� ����� ������,���";
    cout << endl;
    cout << "�������, ��� �� �� ������� ����. ���� �� ���������� ������� ���� - ��� ���������� ��������������� ��������� ���� ���- ";
    cout << endl;
    cout <<"���� ������������������. \n";
}

void print_menu_rus()
{
    cout<<"                                    _      _    _____                   __\n";
    cout<<"                                   | \\    / |  |       |     |   |    /   \\\n";
    cout<<"                                   |  \\  /  |  |       |     |   |   /     \\\n";
    cout<<"                                   |   \\/   |  |___    |_____|   |___|     |\n";
    cout<<"                                   |        |  |       |     |   |   \\     /\n";
    cout<<"                                   |        |  |_____  |     |   |    \\___/\n\n";
    cout<<"1 - ���� ������ ���������� \n";
    cout<<"2 - ���� ���� ������ ����� \n";
    cout<<"3 - ���� \n";
    cout<<"4 - ������� \n";
    cout<<"5 - ����� ";
}

void print_menu_eng()
{
     cout<<"                                    _      _    _____                   \n";
    cout<<"                                   | \\    / |  |       |\\    |   |    |\n";
    cout<<"                                   |  \\  /  |  |       | \\   |   |    |\n";
    cout<<"                                   |   \\/   |  |___    |  \\  |   |    |\n";
    cout<<"                                   |        |  |       |   \\ |   |    |\n";
    cout<<"                                   |        |  |_____  |    \\|   \\____/    \n\n";
    cout << "1 - Game against the computer \n";
     cout << "2 - Game against each other \n";
     cout << "3 - Language \n";
     cout << "4 - Rules \n";
     cout << "5 - Exit";
}


int main ()
{
    setlocale(LC_ALL, "Russian"); // ������������� �������� �����.
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // ���������� ����������� ���������� ������������ ������.
	SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 14));  // ��������� ����� ���� � ������ (��� << 4 | �����).
    //Rules ();
	Logo();
	int choice;
	print_menu_rus();
	do{
	cout <<endl<<"> ";
	cin>>choice;
	switch(choice) {
case 1:
    break;
case 2:
    break;


case 3:
    int choice_language;
    cout<<"1 - �������\n";
    cout<<"2 - ����������\n";
    cout<<"> ";
    do{
    cin>>choice_language;
    switch(choice_language) {
case 1:
    print_menu_rus();
    break;
case 2:
    print_menu_eng();
    break;
    }
    }while(cin);

case 4:
    Rules ();
    break;
case 5:
    cout<<"� ���� ���� ������� ��������. ��������� ���!\n";
    return 0;

	}
} while(cin);

return 0;
}

