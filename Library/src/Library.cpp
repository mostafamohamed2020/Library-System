/**********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                            */
/** DATE    : 30 OCTOBRE 2021                             */
/** VERSION : V01                                         */
/** HINT    : IMPLEMENT A SYSTEM FOR LIBRARY TO ADD BOOKS */
/** OR SEARCH FOR BOOK OR DELETE EXISTED BOOKS            */
/**********************************************************/
#include "Library.h"

Library::Library()
{
    /** DO NOTHING */
}

void Library::AddBook(char* Name , char* Author , float Salary)
{
	/** USE DYNAMIC ALLOCATION TO RESERVE LOCATION FOR NEW BOOK */
	struct book* NewBook = (struct book*) malloc(sizeof(struct book));

	/** CHECK IF THERE IS FREE SPACE OR NOT */
	if(NewBook == NULL)
		cout<<"There Is No Free Space TO Add New Book\n";
	else
	{
		NewBook -> next = head ;          /** THE ADDED BOOK POINTS TO THE PREVIOUS BOOK */
		strcpy(NewBook->name , Name);     /** STORE BOOK NAME                            */
		strcpy(NewBook->author , Author); /** STORE AUTHOR'S NAME                        */
		NewBook->salary = Salary ;        /** STORE THE SALARY                           */
		head = NewBook ;                  /** HEAD POINTS TO THE LAST ADDED BOOK         */
	}
}

void Library::DisplayAll()
{
	struct book* Temp = head ;

	if(Temp == NULL)
		cout<<"There Is No Books To Show\n";
	else
	{
		for(Temp ; Temp != NULL ; Temp = Temp->next)
		{
            cout<<Temp->name<<endl;
		}
	}
}
