#include "pch.h"
#include "Ordenamiento.h"
#include <chrono>


Ordenamiento::Ordenamiento()
{
}


Ordenamiento::~Ordenamiento()
{
}

void Ordenamiento::print(vector<int> vec)
{
	std::chrono::time_point<std::chrono::system_clock> inicio, fin;
	vector <int> m_vres;
	inicio = std::chrono::system_clock::now();
	m_vres = BubbleSort(vec);
	fin = std::chrono::system_clock::now();
	cout << "Bubble: ";
	for (int i = 0; i < m_vres.size(); i++)
	{
		cout << m_vres.at(i);
		if (i < m_vres.size()-1)
		{
			cout << ", ";
		}
		else cout << endl;
	}
	std::chrono::duration<double> seg = fin - inicio;
	cout << "Tiempo transcurrido: " << seg.count() << " seg" << endl;
	inicio = std::chrono::system_clock::now();
	m_vres = InsertionSort(vec);
	fin = std::chrono::system_clock::now();
	cout << "Insertion: ";
	for (int i = 0; i < m_vres.size(); i++)
	{
		cout << m_vres.at(i);
		if (i < m_vres.size()-1)
		{
			cout << ", ";
		}
		else cout << endl;
	}
	seg = fin - inicio;
	cout << "Tiempo transcurrido: " << seg.count() << " seg" << endl;
}

vector<int> Ordenamiento::BubbleSort(vector<int> vec)
{
	vector<int> m_bubble;
	m_bubble = vec;
	for (int i = 0; i < m_bubble.size()-1; i++)
	{
		bool isOrder = true;
		for (int j = 0; j < m_bubble.size()-i-1; j++)
		{
			if (m_bubble[j] > m_bubble[j+1])
			{
				swap(m_bubble[j], m_bubble[j+1]);
				isOrder = false;
			}
		}
		if (isOrder) return m_bubble;
	}
	return m_bubble;
}

vector<int> Ordenamiento::InsertionSort(vector<int> vec)
{
	vector<int> m_insertion;
	m_insertion = vec;
	for (int i = 1; i < m_insertion.size(); i++)
	{
		int j = i - 1, pivot = m_insertion[i];
		while (j >= 0 && m_insertion[j] > pivot)
		{
			swap(m_insertion[j],m_insertion[j+1]);
			j--;
		}
	}
	return m_insertion;
}
