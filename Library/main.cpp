
#include"Library.h"

#define Admin   1
#define Visitor 2

int main()
{
    int mode ;
    float price ;
    char name[12] ;
    char author[12] ;

    Library library ;

    do{
        cout<<"Choose Your Mode\n"<<endl;
    cin>>mode;
        switch(mode)
        {
        case Admin:
            cout<<"Enter The Book Name\n";
            cin>>name;
            cout<<"Enter The Author\n";
            cin>>author;
            cout<<"Enter The Book Price\n";
            cin>>price;
            library.AddBook(name, author, price);
            break;

        case Visitor:
            library.DisplayAll();
            break;

        default:
            cout<<"Wrong Choice\n";
            break;
        }
    }while(mode != false);


    return 0;
}
