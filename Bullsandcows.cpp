#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>
using namespace std;



void Logo () // Логотип 
{
	
    cout <<"  _____                                                          _____      _____     _____    ____            \n";
    cout <<   " |        |        |   |   /  |    /|      |    /|      |   /   /     \\    |     \\   /     \\  |    \\    |       |\n";
     cout <<  " |        |        |   |  /   |   / |      |   / |      |  /    |     |    |      |  |     |  |     |   |       |\n";
    cout <<   " |_____   |_____   |   | /    |  /  |      |  /  |      | /     |     |    |_____ /  |     |  |_____/   |_____  |\n";
   	cout << " |     \\  |     \\  |   | \\    | /   |      | /   |      | \\     |     |    |         |     |  |     \\   |     \\ |\n";
   cout <<       " |_____/  |_____/  |   |  \\   |/    |      |/    |      |  \\    \\_____/    |         \\_____/  |____ /   |_____/ |\n";
}



void Rules () // Основные правила 
{
	cout <<"  _______    _____                ____                                     \n";
	cout <<" |       |  |     \\      /\\      |    \\    |    /|      /\\          /\\     \n";
	cout <<" |       |  |      |    /  \\     |     |   |   / |     /  \\        /  \\ \n";
	cout <<" |       |  |______/   /____\\    |_____/   |  /  |    /    \\      /____\\    \n";
	cout <<" |       |  |         /      \\   |     \\   | /   |   /      \\    /      \\  \n";
	cout <<" |       |  |        /        \\  |_____/   |/    |  /        \\  /        \\   \n";

    
    
}







int main ()
{
	setlocale(LC_ALL, "Russian"); // Использование русского языка.
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // Получаение дескриптора устройства стандартного вывода.
	SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 14));  // Установка цвета фона и текста (Фон << 4 | текст).
     Rules ();
	//  Logo () ; 
}
