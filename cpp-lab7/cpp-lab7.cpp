// cpp-lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

/* Дано число N (> 0) и набор из N чисел. Создать стек, содержащий исход-
ные числа (последнее число будет вершиной стека), и вывести указатель
на его вершину.*/

#include "pch.h"
#include <iostream>

using namespace std;

struct numb {
	int data;
	numb *next;
};

numb *top = NULL;

void push(numb *n);
void pop();
int vvod_i();

int main() {

	setlocale(LC_ALL, "Rus");
	int N, i;

	cout << "Введите N: " << endl;
	N = vvod_i();
	for (i = 0; i < N; i++) {
		numb *n = new numb;
		cout << "Введите число: " << endl;
		n->data = vvod_i();
		push(n);
	}
	cout << top << ":" << top->data << endl;
	return 0;
}

void pop() {
	numb *n = top;
	top = top->next;
	delete(n);
}

void push(numb *n) {
	n->next = top;
	top = n;
}

int vvod_i() {
	int x;
	if (cin >> x) {
		cin.clear();
		cin.sync();
		return x;
	}
	else {
		cin.clear();
		cin.sync();
		cout << "Число введено не коректно, попробуйте ещё раз" << endl;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
