#include<stdio.h>
#include<malloc.h>
#include<conio.h>

struct node
{
    char *name[100];
    int age;
    char *address[100];
    int phone;
    char bloodgroup[100];
    int reg;
    int priority;
    struct node *next;
};
struct node *start= NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
int main()
{

    int option;
    do{
        printf("\t\t\t-------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t WELCOME TO HEALTH CARE HOSPITAL!\n");
        printf("\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t-------------------------------\n");
        printf("\t\t\t1.ADD A PATIENT\n");
        printf("\t\t\t2.DELETE A RECORD\n");
        printf("\t\t\t3.DISPLAY ALL APPOINTMENTS\n");
        printf("\t\t\tEnter your choice:");
        scanf("%d",&option);
    switch(option)
    {
    case 1:
        start= insert(start);
        getchar();
        system("cls");
        break;
    case 2:
        start= delete(start);
        getchar();
        system("cls");
        break;
    case 3:
        display(start);
        getchar();
        system("cls");
        break;
    case 4:
        exit(0);
        break;
    }
}while(option!=4);
}

struct node *delete(struct node *start)
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("\n NO PATIENT RECORD TO DELETE");
        return;
    }
    else
    {
        ptr= start;
        printf("\n Deleted Record is : %d",ptr->reg);
        start=start->next;
        free(ptr);
    }
    return start;
};

void table()
{
    printf("\t\tPlease Refer this Table for your disease!\n");
    printf("1.Heart attack\n");
    printf("2.Severe wound/Bleeding\n");
    printf("3.Cancer\n");
    printf("4.Chest pain\n");
    printf("5.Fracture\n");
    printf("6.Diabetes Checkup\n");
    printf("7.Infection\n");
    printf("8.Viral Fever\n");
    printf("9.Common Cold/Head ache\n");
}     
