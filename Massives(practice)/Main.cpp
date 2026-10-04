#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	
	int consumption[2][3];
	consumption[0][0] = 1;
	consumption[0][1] = 4;
	consumption[0][2] = 7;
	
	consumption[1][0] = 2;
	consumption[1][1] = 4;
	consumption[1][2] = 6;

	int fuel[2];
	fuel[0] = 300;
	fuel[1] = 1000;

	int plane = 0; 
	double AB = 0, BC = 0, weight = 0;

	std::cout << "Выберите вид самолета(1 или 2): ";
	std::cin >> plane;
	while(plane != 1 && plane != 2)
	{
		std::cout << "Некорректный ввод. Повторите попытку\n";
		std::cout << "Выберите вид самолета(1 или 2): ";
		std::cin >> plain;
	}
	std::cout << "Введите расстояние от A до B(км): ";
	std::cin >> AB;
	while(AB < 0)
	{
		std::cout << "Некорректный ввод. Повторите попытку\n";
		std::cout << "Введите расстояние от A до B(км): ";
		std::cin >> AB;
	}
	std::cout << "Введите расстояние от B до C(км): ";
	std::cin >> BC;
	while(BC < 0)
	{
		std::cout << "Некорректный ввод. Повторите попытку\n";
		std::cout << "Введите расстояние от B до C(км): ";
		std::cin >> BC;
	}
	std::cout << "Введите вес груза: ";
	std::cin >> weight;
	while (weight < 0)	
	{
		std::cout << "Некорректный ввод. Повторите попытку\n";
		std::cout << "Введите вес груза: ";
		std::cin >> weight;
	}
	if (plane == 1 && weight > 2000)
	{
		std::cout << "Самолет 1 такой груз не поднимет\n\n";
		return 0;
	}
	else if (plane == 2 && weight > 3000)
	{
		std::cout << "Самолет 2 такой груз не поднимет\n\n";
		return 0;
	}

	int p = plane - 1;
	double fuelPerKm = 0;
	if (plane == 1)
	{
		if (weight <= 750)
		{
			fuelPerKm = consumption[p][0];
		}
		else if (weight <= 1500)
		{
			fuelPerKm = consumption[p][1];
		}
		else
		{
			fuelPerKm = consumption[p][2];
		}
	}
	else if (plane == 2)
	{
		if (weight <= 1000)
		{
			fuelPerKm = consumption[p][0];
		}
		else if (weight <= 2000)
		{
			fuelPerKm = consumption[p][1];
		}
		else
		{
			fuelPerKm = consumption[p][2];
		}
	}
	double fuelAB = fuelPerKm * AB;
	double fuelBC = fuelPerKm * BC;

	if (plane == 1)
	{
		if 
	}


	



}