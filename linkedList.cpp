#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<windows.h>
using namespace std;
void patient(void);

struct patient
    {

        int id;
        int blood;
        int day;
        int month;
        int year;
        int phone;
        string name;
        string surname;
        string addr;
        string disease;
    };

void transfer(struct patient p);
void del()
{

    system("cls");
    int node;
    struct patient p;
    ifstream pfile;
    pfile.open("patients.txt");
    if(pfile.fail())
    {
        system("cls");
        cout<<"Error Opening the file";
        exit(1);
    }
    else{
        system("cls");
        cout<<"Open successful";
        system("pause");
        }
         pfile>>p.id>>p.name>>p.surname>>p.addr>>p.disease>>p.phone>>p.blood>>p.day>>p.month>>p.year;

        while(pfile.good())

        {
        transfer(p,node);

pfile>>p.id>>p.name>>p.surname>>p.addr>>p.disease>>p.phone>>p.blood>>p.day>>p.mo    nth>>p.year;

    }
    pfile.close();
    system("PAUSE");
    patient();

}

void transfer(struct patient p)
{
    struct node
    {
        int id;
        int blood;
        int day;
        int month;
        int year;
        int phone;
        string name;
        string surname;
        string addr;
        string disease;
        struct node *next;

    }*start;

    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        temp->id=p.id;
        temp->name=p.name;
        temp->surname=p.surname;
        temp->addr=p.addr;
        temp->disease=p.disease;
        temp->phone=p.phone;
        temp->blood=p.blood;
        temp->day=p.day;
        temp->month=p.month;
        temp->year=p.year;
        temp->next=NULL;
        start=temp;
    }
    struct node *pt,*preptr;
    if(start==NULL)
    {
        cout<<"This list is empty";
        return;
    }

    pt=start->next;
    preptr=start;
    while(pt->next !=NULL)
    {
        pt=pt->next;
        preptr=preptr->next;
    }
    preptr->next=NULL;
    free(pt);

    struct node *ptr;
    ptr=start;
    if(start==NULL)
    {
        cout<<"The list is empty"<<"\n";
         return;
    }
    else
    {

            for(int i=0; i<80; i++)
            {
                cout<<"-";
            }
            cout<<"ID: "<<ptr->id<<"\n"<<"Name: "<<ptr->name<<"\n"<<"Surname: " <<ptr->surname<<"\n"<<"Address: "<<ptr->addr<<"\n"<<"Reason: "<<ptr->disease<<"\n"<<"Phone Number: "<<ptr->phone<<"\n"<<"Blood ID: "<<ptr- >blood<<"\n"<<"Registration Date: "<<ptr->day<<"/"<<ptr->month<<"/"<<ptr- >year<<"\n";

    }
}
