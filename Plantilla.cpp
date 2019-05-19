// Plantilla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "CVector.h"
#include "Ordenamiento.h"
#include <iostream>

int main()
{
	CVector ejemplo;
	Ordenamiento sort;
	sort.print(ejemplo.VectorGenerate(10000, Ramdom));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/*
Big "oh"
Big Omega
Big theta
Small "oh"
Small omega

Tarea:
Definicón del problema
input arr[n]
output arr[n] ordenado
-Solucion ¿Como funciona?
best/worst complexity
Code
Benchmark
1.Bubble Sort
2.Insertion Sort
3. Heap Sort
.Quick Sort
.
*/
