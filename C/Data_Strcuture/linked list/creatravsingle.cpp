/* Traversing of single linklist */
/* Data Structures Using C by UDIT AGARWAL */
# include <stdio.h>
# include <conio.h>
# include <alloc.h>
struct node
   {
           int info;
           struct node *link;
     };
struct node *first;

void main ( )

   {
	 void create ();
	 void traverse ();
	 clrscr ( );
	 create ( );
	 traverse();
	 getch ( );
    }

void create ( )
  {
  struct node * ptr, *cpt;
  char ch;
  ptr = (struct node*) malloc (sizeof (struct node));
  printf ("Input first node information");
  scanf ("%d", &ptr->info);
  first=ptr;
  do
    {
      cpt=(struct node*) malloc(sizeof(struct node));
      printf("Input next node information");
      scanf("%d",&cpt->info);
      ptr->link = cpt;
      ptr = cpt;
   printf ("Press <Y/N> for more node");
     ch = getch ( );
    }
while (ch =='Y');
ptr->link = NULL;
}
void traverse ( )
{
struct node *ptr;
printf ("Traversing of link list:\n");
ptr = first;
while (ptr!= NULL)
{
printf ("%d\n", ptr -> info);
ptr = ptr -> link;
}
}