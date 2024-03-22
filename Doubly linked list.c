//doubly linked list

// Online C compiler to run C program online
#include <stdio.h>


struct node
{
    int v;
    struct node * p;
    struct node * prev;
};

void printlist (struct node * p)
{
    while (p != NULL)
    {
        printf (" %d ", p->v);
        p = p->p;
    }
}
void printlist2 (struct node * last)
{
    while ( last != NULL)
    {
        printf (" %d ", last->v);
        last = last->prev;
    }
}

struct node* updatelist (struct node * last, struct node * newnode)
{
    last->p = newnode;
    last = newnode;

    return last;
}


int main() {
    // Write C code here

    struct node * n1, *n2, *n3, *n4, *head, *p, *end, *middle;
    int v, i=0;
    n1 = (struct node *) malloc (sizeof (struct node));


    while (1)
    {
        printf ("v = ");
        scanf ("%d", &v);
        if (v < 0) { break; }

        p = (struct node *) malloc (sizeof (struct node));
        p->v = v;
        p->p = NULL;
        p->prev = NULL;

        if (i == 0)
        {
            head = p;
            end = p;
        }
        else
        {
            //end = updatelist (end, p);
            end->p = p;
            p->prev = end;
            end = p;
            if (i == 3) {middle = p;}
        }
        i++;
    }

     printlist2 (middle);
     printf ("\n");
     printlist (middle);





    return 0;
}
