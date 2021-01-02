
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char name[20]; 
    int edition; 
    int pages;
};

int main()
{


struct Book b1  = {"C programming", 2 , 100};



struct Book b2 ; 
printf ("Enter Book name: "); 
scanf("%[^\n]", b2.name); 
printf ("Enter Book edition: "); 
scanf("%d",&b2.edition); 
printf ("Enter Book pages: "); 
scanf("%d",&b2.pages); 


struct Book * b3 = (struct Book *)malloc(sizeof (struct Book)); 
printf ("Enter Book name: "); 
scanf(" %[^\n]", b3->name); 
printf ("Enter Book edition: "); 
scanf("%d",&b3->edition); 
printf ("Enter Book pages: "); 
scanf("%d",&b3->pages); 


printf(" Book nmae : %s , Book edition : %d, pages: %d \n", b1.name, b1.edition, b1.pages);
printf(" -----------------------------------------\n");
printf(" Book nmae : %s , Book edition : %d, pages: %d \n", b2.name, b2.edition, b2.pages);
printf(" -----------------------------------------\n");
printf(" Book nmae : %s , Book edition : %d, pages: %d \n", b3->name, b3->edition, b3->pages);
 
}
