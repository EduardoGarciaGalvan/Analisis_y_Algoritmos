// Plantilla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "CVector.h"
#include "Ordenamiento.h"
#include "Busqueda.h"
#include <iostream>

int main()
{
	CVector ejemplo;
	Ordenamiento sort;
	Busqueda search;
	search.LinealSearch(ejemplo.VectorGenerate(10000, Ramdom), 555);
	search.BinarySearch(ejemplo.Get(), 6347, 0, ejemplo.Size() - 1);
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
3. Merge Sort
4.Quick Sort
5.Lineal search
6.Binary search
7.Counting Sort
8.Radix Sort
9.Bucket Sort

Tarea #5
-hash table 
-3 funciones hash
-insertar
-busqueda
*/
