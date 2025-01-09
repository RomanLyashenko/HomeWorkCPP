#include <iostream>
using namespace std;
#include "List.h";

int main()
{
	List<int> list;
	list.pushBack(2);
	list.pushBack(8);
	list.pushBack(4);
	list.pushBack(9);
	list.print();

	/*cout << list[1] << endl;
	int* arr = list();
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}*/
	cout << endl;
	list.pushIndex(0, 2);
	list.print();
	list.sort();
	list.print();
	cout << list;
}
