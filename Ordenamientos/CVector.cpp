#include "pch.h"
#include "CVector.h"
#include <chrono>


CVector::CVector()
{
}


CVector::~CVector()
{
}

vector<int> CVector::VectorGenerate(int n, ORDENAMIENTO ordenamiento)
{
	std::chrono::time_point<std::chrono::system_clock> inicio, fin;
	m_entrada = new vector<int>;
	switch (ordenamiento)
	{
	case Ascendente:
	{
		inicio = std::chrono::system_clock::now();
		for (int i = 0; i < n; i++)
		{
			m_entrada->push_back(i+1);
		}
		fin = std::chrono::system_clock::now();
		break;
	}
	case Descendente:
	{
		inicio = std::chrono::system_clock::now();
		for (int i = 0; i < n; i++)
		{
			m_entrada->push_back(n - i);
		}
		fin = std::chrono::system_clock::now();
		break;
	}
	case Ramdom:
	{
		inicio = std::chrono::system_clock::now();
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			m_entrada->push_back((rand() % n + 1));
		}
		fin = std::chrono::system_clock::now();
		break;
	}
	}
	cout << "original: ";
	for (int i = 0; i < m_entrada->size(); i++)
	{
		cout << m_entrada->at(i);
		if (i < m_entrada->size() - 1)
		{
			cout << ", ";
		}
		else cout << endl;
	}
	std::chrono::duration<double> seg = fin - inicio;
	cout << "Tiempo transcurrido: " << seg.count() << " seg" << endl;
	return *m_entrada;
}

void CVector::Print()
{
	for (int i = 0; i < m_entrada->size(); i++)
	{
		cout << m_entrada->at(i);
		if (i!=m_entrada->size())
		{
			cout << ", ";
		}
		else cout << endl;
	}
}
