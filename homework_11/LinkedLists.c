/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: LinkedList
Date: 4/21/2019
*/

#include <stdlib.h>
#include <stdio.h>

// declare ContactInfo struct with variables
struct ContactInfo
{

    char fname[15];
    char lname[15];
    char phone[15];
    char zip[15];
    struct ContactInfo *next;
};

// puts data in variables
void getContactInfo(struct ContactInfo *info)
{
    // asks for input and puts it in pointed variables
    printf("What is your first name?: ");
    gets(info->fname);
    printf("What is your last name?: ");
    gets(info->lname);
    printf("What is your phone number?: ");
    gets(info->phone);
    printf("What is your zip code?: ");
    gets(info->zip);
}
// function returns new list that has been added to
struct ContactInfo *addContactInfoToList(struct ContactInfo *info, struct ContactInfo *newInfo)
{
    // declare a pointer to iterate through linked list
    struct ContactInfo *p = NULL;
    // set the new info next node to null
    newInfo->next = NULL;
    // if linked list is empty:
    if (info == NULL)
    {
        // then it will be assigned the new node
        info = newInfo;
    }
    // if it isn't empty:
    else
    {
        // the iterator is assigned the head of the list
        p = info;
        // traverse it until you reach the end
        while (p->next != NULL)
        {
            p = p->next;
        }
        // once at the end, assign the new node to the next node on the last element
        p->next = newInfo;
    }
    // return the new list
    return info;
}

// function that displays all elements in the linked list
void display(struct ContactInfo *info)
{
    // declare iterator
    struct ContactInfo *p = NULL;
    // if list is empty (base case):
    if (info == NULL)
    {
        // tell user there is nothing to print
        printf("No list found.\n");
    }
    // if list is populated:
    else
    {
        // assign the head to the iterator
        p = info;
        // iterate
        while (p->next != NULL)
        {
            // print all data from current node and "increment"
            printf("--------------------------\n");
            printf("First name is %s\n", p->fname);
            printf("Last name is %s\n", p->lname);
            printf("Phone number is %s\n", p->phone);
            printf("Zip code is %s\n", p->zip);
            printf("--------------------------\n");
            p = p->next;
        }
        // print last data that isnt reached by loop (p->next != NULL)
        printf("--------------------------\n");
        printf("First name is %s\n", p->fname);
        printf("Last name is %s\n", p->lname);
        printf("Phone number is %s\n", p->phone);
        printf("Zip code is %s\n", p->zip);
        printf("--------------------------\n");
    }
}

int main()
{
    // declare empty list
    struct ContactInfo *head = NULL;
    // loop 10 times
    for (int i = 0; i < 10; i++)
    {
        // declare temp to hold new nodes
        struct ContactInfo *tmp = (struct ContactInfo *)malloc(sizeof(struct ContactInfo));
        // populate temp
        getContactInfo(tmp);
        // add new node to list
        head = addContactInfoToList(head, tmp);
    }
    // display everything
    display(head);

    return 0;
}