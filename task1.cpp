#include <iostream>
#define MODE 1
#if( MODE==1)
int add(int a, int b)
{
	return a + b;
}
#endif
int main(int argc, char** argv)
{
	system("chcp 1251");
#ifndef MODE
	#error Константа не определена, определите MODE!
#endif
#ifdef MODE
#if (MODE == 0)
	{
		std::cout << "Работаю в режиме тренировки" << std::endl;
	}
#elif (MODE == 1)
	{
		int a, b;
		std::cout << "«Работаю в боевом режиме" << std::endl;
		std::cout << "Введите число 1 : ";
		std::cin >> a;
		std::cout << "Введите число 2 : ";
		std::cin >> b;
		std::cout << std::endl;
		std::cout << "Результат сложения: " << add(a, b) << std::endl;
	}
#else
	{
		std::cout << "Неизвестный режим. Завершение работы";
	}
#endif
#endif
	return 0;
}