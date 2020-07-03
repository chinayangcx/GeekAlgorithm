#include"LinkedList.h"
LinkedList* ReverseList(LinkedList *start)
{
    LinkedList *p1=start,*p2,*temp;
    if (p1==NULL)
    {
        cout<<" reverseList argument is empty\n";
        return NULL;
    }
    p2=p1->next; //建立P2
    p1->next=NULL; //断开 指向NULL
    while (p2->next!=NULL)
    {
        temp=p2->next; //保存
        p2->next=p1;  //反向
        p1=p2;
        p2=temp;
    }
    p2->next=p1;
    return p2;
}


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