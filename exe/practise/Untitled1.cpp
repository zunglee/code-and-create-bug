#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
struct class_room
{
       int chair_no,floor;
       class_room *next;
       }*cc1,*start,*cc2;

class_room *node_maker()
{
     cc2 = new class_room;
     return cc2;
} 
main()
{


cc1 = new class_room;
start = cc1;
cin>>cc1->floor>>cc1->chair_no;
cc1->next=NULL;
cc1 = node_maker();
cin>>cc1->floor>>cc1->chair_no;
cc1->next=NULL;
start->next=cc1;
cout<<endl<<endl;
cout<<start->floor<<"\t"<<start->chair_no<<"\n";
start=start->next;
cout<<start->floor<<"\t"<<start->chair_no;
getch();
}
