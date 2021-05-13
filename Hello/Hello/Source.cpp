﻿#pragma warning(disable:4326)
#include<iostream>	//cin/cout
using namespace std;//cin/cout

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello World!"; cout << "Привет Мир!";
	cout << "Сам привет)";
}

//Ctrl + F7 - Компиляция
//Ctrl + F5 - Запуск

/*
----------------------------------------------
#include<iostream>
# показывает, что include - это директива
Директива - это указание компилятору на 
выполнение некоторых действий.
Директива #include указывает компилятору на то, 
что к нашему исходному файлу нужно подключить другой файл,
в даном случае - iostream.

<iostream> содержит потоки ввода/вывода - cin/cout


void main()
main() - это главная функция, которая является точкой входа,
поскольку с нее начинается выполнение любой программы.
Функция main() обязательно должна быть в любом проекте,
но только одна!!!
() - показывают, что main() - это функция.
void (пустота) - показывает, что функция main() ничего не возвращает по завершении.

{} - показывают, тело и область видимости функции main()


cout (Console Out) - поток вывода на экран. 

<<  - оператор перенаправления в поток, 
	  отправляет значения в поток cout.

"Hello World" - строковая константа.

; - показывает конец выражения.
----------------------------------------------
*/