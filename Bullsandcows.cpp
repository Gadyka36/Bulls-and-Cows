#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>
using namespace std;



void Logo () // ������� 
{
	
    cout <<"  _____                                                          _____      _____     _____    ____            \n";
    cout <<   " |        |        |   |   /  |    /|      |    /|      |   /   /     \\    |     \\   /     \\  |    \\    |       |\n";
     cout <<  " |        |        |   |  /   |   / |      |   / |      |  /    |     |    |      |  |     |  |     |   |       |\n";
    cout <<   " |_____   |_____   |   | /    |  /  |      |  /  |      | /     |     |    |_____ /  |     |  |_____/   |_____  |\n";
   	cout << " |     \\  |     \\  |   | \\    | /   |      | /   |      | \\     |     |    |         |     |  |     \\   |     \\ |\n";
   cout <<       " |_____/  |_____/  |   |  \\   |/    |      |/    |      |  \\    \\_____/    |         \\_____/  |____ /   |_____/ |\n";
}



void Rules () // �������� ������� 
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
	setlocale(LC_ALL, "Russian"); // ������������� �������� �����.
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // ���������� ����������� ���������� ������������ ������.
	SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 14));  // ��������� ����� ���� � ������ (��� << 4 | �����).
     Rules ();
	//  Logo () ; 
}
