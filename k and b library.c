#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
char bk_name[30];
char publisher[30];
float price;
};

int main()
{
struct library l[100];
char pb_nm[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;

printf("\n\ Library Management \n");
while(j!=5)
{
printf("\n1. Add book information\n");
printf("2. Display All Books Available \n");
printf("3. Display Highest Price Book\n");
printf("4. Display list of Publishers\n");
printf("5. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
/* Add book */
case 1:  

	printf ("Enter book name = ");
	scanf ("%s",l[i].bk_name);
	
	printf ("Enter publisher name = ");
	scanf ("%s",l[i].publisher);

	printf ("Enter price = ");
	scanf ("%f",&l[i].price);
	keepcount++;

	break;
case 2:
	printf("Display All Books Available\n");
	for(i=0;i<keepcount;i++)
	{
	printf ("\n book name = %s",l[i].bk_name);
	
	printf ("\t author name = %s",l[i].publisher);

	printf ("\t  price = %f",l[i].price);
	}
	break;

case 3:
	printf ("Highest Price Book : ");
float temp = 0;
	for (i=0;i<keepcount;i++)
	{
	    if(temp < l[i].price)
	        temp = l[i].price;
	}
	printf("%f", temp);
	
	break;

case 4:
	printf ("List of Publishers : ");
	for (i=0;i<keepcount;i++)
	{
	    printf ("\n %s ",l[i].publisher);
	}
	break;

case 5:
	exit (0); 
}
}
return 0;
}
