// Стек — это структура данных, которая работает по принципу FILO(first in — last out; первый пришел — последний ушел).
// Ниже приведен пример работы с шаблонным стеком

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	stack <int> s_arr;
	cout << "Введите количество элементов стека: ";
	unsigned int size;
	cin >> size;
	cout << endl << "(push) Введите " << size << " элементов последовательно." << endl;
	for (unsigned i = size; i > 0; i--) {
		int a;
		cout << i << "й элемент: ";
		cin >> a;

		s_arr.push(a);
	}

	cout << endl << "(top) Верхний элемент: " << s_arr.top() << endl;
	cout << "(size) Размер стека: " << s_arr.size() << " = " << size << endl;
	s_arr.pop();
	cout << "(pop) Верхний элемент после удаления: " << s_arr.top() << endl;
	cout << "Создадим временный стек и перенесем в него элементы старого стека.";
	stack <int> temp;
	for (unsigned int i = s_arr.size(); i > 0; i--) {
		cout << endl << "Удалили " << s_arr.top();
		temp.push(s_arr.top());
		s_arr.pop();
	}
	cout << endl << "(empty) Полностью очистили старый стек. Пуст ли он? [" << s_arr.empty() << "]." << endl;
	s_arr.swap(temp);
	cout << "(swap) Перенесли элементы временного стека обратно в старый.";
	for (unsigned int i = s_arr.size(); i > 0; i--) {
		cout << endl << 5 - i << "й элемент: " << s_arr.top();
		s_arr.pop();
	}
	return 0;
}