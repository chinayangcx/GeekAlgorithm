#include<iostream>
#include<string>
using namespace std;
typedef struct LinkedList
{
    char data;
    LinkedList *next;

}LinkedList;
LinkedList* ReverseList(LinkedList *start);
LinkedList* CreateList(string & input);
LinkedList* CreateList();
void ShowListData(LinkedList *);
void FreeTheList(LinkedList *Head);