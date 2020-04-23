
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

void Rules () // Основные правила
{
	cout <<"  _______    _____                ____                                     \n";
	cout <<" |       |  |     \\      /\\      |    \\    |    /|      /\\          /\\     \n";
	cout <<" |       |  |      |    /  \\     |     |   |   / |     /  \\        /  \\ \n";
	cout <<" |       |  |______/   /____\\    |_____/   |  /  |    /    \\      /____\\    \n";
	cout <<" |       |  |         /      \\   |     \\   | /   |   /      \\    /      \\  \n";
	cout <<" |       |  |        /        \\  |_____/   |/    |  /        \\  /        \\   \n";
	cout << endl;
    cout << endl;
    cout << "  | Игра с компьютером | \n" ;
    cout << endl;
    cout << "Компьютер задумывает четыре неповторяющиеся цифры от 0 до 9. Игрок делает ходы, чтобы узнать эти цифры и их порядок.";
    cout << endl;
	cout << "Каждый ход состоит из четырех цифр. В ответ компьютер показывает число отгаданых цифр, стоящих на своих местах(число бы-";
    cout << endl;
    cout << "ков) и число отгаданых цифр, стоящих не на своих местах (число коров).";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << " | Игра друг против друга | \n ";
    cout << endl;
    cout << "Каждый из игроков вводит тайное число с неповторяющимися цифрами. Игрок, который начинает игру, делает первый ход. ";
    cout << endl;
    cout << "Ход - это ввод четырех-, пяти- или шестизначного (в зависимости от уровня сложности) числа с неповторяющимися цифрами ";
    cout << endl;
    cout << "На экран выводится количество коров и быков. Игроки делают ходы по очереди. Побеждает тот, кто угадает число первым,при";
    cout << endl;
    cout << "условии, что он не начинал игру. Если же отгадавший начинал игру - его противнику предоставляется последний шанс уга- ";
    cout << endl;
    cout <<"дать последовательность. \n";
}

void print_menu_rus()
{
    cout<<"                                    _      _    _____                   __\n";
    cout<<"                                   | \\    / |  |       |     |   |    /   \\\n";
    cout<<"                                   |  \\  /  |  |       |     |   |   /     \\\n";
    cout<<"                                   |   \\/   |  |___    |_____|   |___|     |\n";
    cout<<"                                   |        |  |       |     |   |   \\     /\n";
    cout<<"                                   |        |  |_____  |     |   |    \\___/\n\n";
    cout<<"1 - Игра против компьютера \n";
    cout<<"2 - Игра друг против друга \n";
    cout<<"3 - Язык \n";
    cout<<"4 - Правила \n";
    cout<<"5 - Выход ";
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
    setlocale(LC_ALL, "Russian"); // Использование русского языка.
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // Получаение дескриптора устройства стандартного вывода.
	SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 14));  // Установка цвета фона и текста (Фон << 4 | текст).
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
    cout<<"1 - Русский\n";
    cout<<"2 - Английский\n";
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
    cout<<"С вами было приятно поиграть. Приходите еще!\n";
    return 0;

	}
} while(cin);

return 0;
}

