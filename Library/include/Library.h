/**********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                            */
/** DATE    : 30 OCTOBRE 2021                             */
/** VERSION : V01                                         */
/** HINT    : IMPLEMENT A SYSTEM FOR LIBRARY TO ADD BOOKS */
/** OR SEARCH FOR BOOK OR DELETE EXISTED BOOKS            */
/**********************************************************/
#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <stdlib.h>

using namespace std;

#include <string.h>


/** CREATE STRUCT FOR EACH NEW ADDED BOOK */
struct book
{
	char name[12];
	char author[12];
	float salary ;
	struct book* next ;
};

class Library
{
private:

    /** HEAD OF LINKED LIST POINTS TO NULL AT THE BEGINING */
    struct book* head = NULL ;

public:

/** EMPTY CONSTRUCTOR */
Library();

/** FUNCTION TO ADD NEW BOOK */
void AddBook(char* Name , char* Author , float Salary);

/** FUNCTION TO DISPLAY ALL EXISTED BOOKS */
void DisplayAll();

};

#endif // LIBRARY_H
