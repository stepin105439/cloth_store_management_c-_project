#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
#include"cloth_store_management.h"
#define clrscr();
    using namespace std;

#define clrscr();


  int main()

     {
         int i;

         #define clrscr();

         clrscr();

        while(1)
               {
                #define clrscr();
                clrscr();
                cout<< "Choose an option\n\n";
                cout<< "\n\t01. Add a product.\n";
                cout<< "\n\t02. Search any product.\n";
                cout<< "\n\t03. Delete any product.\n";
                cout<< "\n\t04. Exit.";
                cout<< "\n\n\nEnter an option :";
                cin>>i;

                if(i==1)
                   {
                   add_item();
                   }

                if(i==2)
                {

                    search_item();

                }

                 if(i==3)
                {
                  cut_item();
                }

                  if(i==4)
                  break;

               }

       return 0;

     }
