#include"LinkedList.h"
#include <iostream>
#include<string>
using namespace std;
bool IsPailnd(LinkedList *Head)
{   
    if (Head->next==NULL)
    {
        cout<<" the string is huiwen\n"; 
        return true;
    }
    
    LinkedList *CurrentSlow=Head;
    LinkedList *CurrentFast=Head;
   // LinkedList *temp;
    int odd_even=0;//0为偶数，1为奇数
    if (Head==NULL)
    {
        cout<<" reseveList argument is null\n";
        return false;
    }
    while (CurrentFast->next!=NULL)
    {
        if (CurrentFast->next->next!=NULL)
        {
            //奇数
            //fast +2  slow +1
            CurrentFast=CurrentFast->next->next;
            CurrentSlow=CurrentSlow->next;
            odd_even=1;
        }
        else //若fast指针 下一次指的是空  说明到底了
        {
            //偶数
            //对fast指针+1 ，使之指向底端
            CurrentFast=CurrentFast->next;
            odd_even=0;
        }   
    }
    cout<<" has find mid\n";
    // //此时slow 记录的为中点或者中点左边
    // LinkedList *StartNode=Head;
    // LinkedList *MidNode=CurrentSlow;
    // //如果是偶数 将中点加1 奇数不变
    // if (odd_even==0)
    // {
    //     MidNode=MidNode->next;
    // }
    // //现在开始对比
    // while ((StartNode->data)==(MidNode->data))
    // {
    //     if (MidNode->next==NULL)
    //     {
    //         cout<<" the string is huiwen\n";
    //         return true;
    //     }
    //     else
    //     {
    //         MidNode=MidNode->next;
    //         StartNode=StartNode->next;
    //     }        
    // }
    // cout<<" the string is not huiwen\n";
    // return false;




    // //翻转后半列 用slow 实现
    // LinkedList *tempSlow=CurrentSlow;//记录
    // LinkedList *P2,*P1;
    // if (odd_even==0)
    // {
    //     tempSlow=tempSlow->next;
    // }
    // P2=tempSlow->next; //记录下一个节点  防止指向自己时丢失信息
    // //P1=tempSlow;        //记录当前节点  利用P1指向
    // tempSlow->next=tempSlow;//将下一个指向自己 意味着反向 
    // tempSlow=P2;    //此时当前节点
    // //P1->next=NULL;  //特殊处理
    // while (tempSlow->next!=NULL)
    // {
    //     P1=tempSlow->next->next;
    //     P2=tempSlow->next;
    //     tempSlow->next=tempSlow;
    //     tempSlow=P2;
    // }
    //LinkedList *reseveTempMid=CurrentSlow,*reseTempEnd=CurrentFast;
    LinkedList *temp;
    //LinkedList *P1=CurrentSlow,*P2;
    if (odd_even==0)
    {
        //tempSlow=tempSlow->next;
        //P1=P1->next;
        CurrentSlow=CurrentSlow->next;
    }
    LinkedList *P1=CurrentSlow,*P2;
    //TODO: 要加入判断2 个字符
    if (P1->next==NULL)
    {
        cout<<" the string is 2 char\n";
        if ((Head->data)==(Head->next->data))
        {
            cout<<" the string is huiwen\n";
            return true;
        }
        cout<<" the string is not huiwen\n";
        return false;
    }
    
    P2=ReverseList(CurrentSlow);
    //P2=P1->next;// 0.得到P2
  /*  if (P2==NULL)
    {
        cout<<" the string is 2 char\n";
        if ((Head->data)==(Head->next->data))
        {
            cout<<" the string is huiwen\n";
            return true;
        }
        cout<<" the string is not huiwen\n";
        return false;
    }*/
    

    
    
    LinkedList *StartNode=Head,*CoStartNode=P2;
    //FIXME: 指针释放有问题
    
    while ((StartNode->data)==(CoStartNode->data))
    {
        if (CoStartNode->next==NULL)
        {
            cout<<" the string is huiwen\n";
            //这里返回之前应该反向
            //LinkedList *p1=CurrentFast,*p2;

            ReverseList(CurrentFast);
            return true;
        }
        else
        {
            StartNode=StartNode->next;
            CoStartNode=CoStartNode->next;
        }
    }
    //指针反向 
    //LinkedList *p1=CurrentFast,*p2;

    ReverseList(CurrentFast);
       
    cout<<" the string is not huiwen\n";
    return false;
}

int main()
{
    string test("ll");
    LinkedList *Head=CreateList(test);
    ShowListData(Head);
    IsPailnd(Head);
    FreeTheList(Head);
}