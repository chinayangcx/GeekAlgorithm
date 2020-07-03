#include"LinkedList.h"


LinkedList* CreateList()
{
    LinkedList *list=(LinkedList*)malloc(sizeof(LinkedList));
    return list;
}
LinkedList* CreateList(string &input)
{
    LinkedList *Head=NULL;
    LinkedList *Current,*Prev;
    
    for (int i = 0; i < input.size(); i++)
    {
        Current=(LinkedList*)malloc(sizeof(LinkedList));
        if (Head==NULL)
        {
            Head=Current;
            
        }
        else
        {
            Prev->next=Current;
        }
        Current->next=NULL;
        Current->data=input[i];
        Prev=Current;
    }
    return Head;

}
void ShowListData(LinkedList *list)
{
    LinkedList *Current=list;
    if(list==NULL)
    {
        cout<<"no data\n";
    }
    else
    {
        while (Current!=NULL)
        {
            cout<<" the data is ' "<<Current->data<<" ' \n";
            Current=Current->next;
        }
        cout<<"show data Done! \n ";
    }
    
}
void FreeTheList(LinkedList *Head)
{
    int count=0;
    if (Head==NULL)
    {
        cout<<"the list is empty\n";
        return;
    }
    else
    {
        LinkedList *Current=Head;
        LinkedList *temp;
        while (Current!=NULL)
        {
            temp=Current->next;
            free(Current);
            Current=temp;
            count++;
        }
        cout<<" free done and count: "<<count<<endl;
    }
    
}