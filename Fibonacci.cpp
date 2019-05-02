// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <chrono>

unsigned int FibonacciRecursivo(unsigned int);
unsigned int FibonacciNoRecursivo(unsigned int);

int main()
{
	std::chrono::time_point<std::chrono::system_clock> inicio, fin;
	unsigned int pos;
	while (true)
	{
		std::cout << "Ha que numero quiere llegar\n";
		std::cin >> pos;
		inicio = std::chrono::system_clock::now();
		std::cout << "El numero fibonacci ubicado en la pos " << pos << " es: " << FibonacciRecursivo(pos) << std::endl;
		fin = std::chrono::system_clock::now();
		std::chrono::duration<double> seg = fin - inicio;
		std::cout << "Tiempo transcurrido: " << seg.count() << std::endl;
		inicio = std::chrono::system_clock::now();
		std::cout << "El numero fibonacci ubicado en la pos " << pos << " es: " << FibonacciNoRecursivo(pos) << std::endl;
		fin = std::chrono::system_clock::now();
		seg = fin - inicio;
		std::cout << "Tiempo transcurrido: " << seg.count() << std::endl;
	}
}

unsigned int FibonacciRecursivo(unsigned int Pos)
{
	return Pos <= 1? Pos:FibonacciRecursivo(Pos-1) + FibonacciRecursivo(Pos-2);
}

unsigned int FibonacciNoRecursivo(unsigned int Pos)
{
	int PPos = 0, SPos = 1, Resultado;
	if (Pos == PPos) return PPos;
	if (Pos == SPos || Pos == 2) return SPos;
	for (int i = 0; i < Pos - 1; i++)
	{
		Resultado = PPos + SPos;
		PPos = SPos;
		SPos = Resultado;
	}
	return Resultado;
}
