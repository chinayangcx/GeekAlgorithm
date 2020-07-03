#include "LinkedList.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	LinkedList *Head = NULL;
	LinkedList *Current, *Prev;
	int input = 0;
	int count = 0;
	while (cin >> input&&input!=5)
	{

		Current = (LinkedList*)malloc(sizeof(LinkedList));
		if (Head ==NULL)
		{
			Head = Current;
		}
		else
		{
			Prev->next = Current;
		}
		Current->next = NULL;
		Current->data = input;
		Current->num = count++;
		Prev = Current;
	}

	//show data
	if (Head == NULL)
	{
		cout << " no data\n";
	}
	else
	{
		Current = Head;
		while (Current != NULL)
		{
			cout << " the " << Current->num << " linked list data is: " << Current->data << " \n";
			Current = Current->next;
		}

	}

	{
		Current = Head;
		LinkedList *temp;
		while (Current != NULL)
		{
			temp=Current->next;
			free(Current);
			Current =temp;
		}

	}
	cout << "Done!\n";
	return 0;
}