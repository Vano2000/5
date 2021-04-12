#include <iostream>
#include "DecHeader.h"
using namespace std;
int main()
{
	int arr, pos, element;
	cout << "Deque Test Program" << endl << "Data:" << endl << "Deque Length = ";
	cin >> arr;
	Deque s(arr);
	cout << "Deque First Element = ";
	cin >> element;
	s.GetFirst(element);
	cout << "Deque Fill Element" << endl;
	while(s.GetSize() < arr)
	{
		cout << "[0] - Add element to Front Position" << endl << "[1] - Add element to Backward Position" << endl;
		cin >> pos;
		if (pos == 0)
		{
			cout << "Element " << s.GetSize() + 1 << " / " << arr << ": ";
			cin >> element;
			s.PushFront(element);
		}
		else if (pos == 1)
		{
			cout << "Element " << s.GetSize() + 1 << " / " << arr << ": ";
			cin >> element;
			s.PushBack(element);
		}
	} 
	cout << endl << "Deque: " << s << endl;
	system("pause");
	while (true)
	{
		cout << "Deque Main Menu" << endl << "[1] Show Deque first element" << endl << "[2] Show Deque last element" << endl << "[3] - Delete Front Deque Element" 
			<< endl <<"[4] - Delete Last Deque Element" << endl << "[5] - Exit" << endl << "Selected Item = ";
		cin >> pos;
		switch (pos)
		{
			case 1:
			{
				cout << s.PeekFront() << endl;
				break;
			}
			case 2:
			{
				cout << s.PeekBack() << endl;
				break;
			}
			case 3:
			{
				s.PopFront();
				cout << endl << "Deque: " << s << endl;
				break;
			}
			case 4:
			{
				s.PopBack();
				cout << endl << "Deque: " << s << endl;
				break;
			}
			case 5:
			{
				return 0;
			}
			default:
			{
				cout << "Error. Selected Item not exist.";
			}
		}

	}

}

