//linked list (creation and traversal)

// Online C compiler to run C program online
#include <stdio.h>


struct node
{
    int v;
    struct node * p;
};

void printlist (struct node * p)
{
    while (p != NULL)
    {
        printf (" %d ", p->v);
        p = p->p;
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

    struct node * n1, *n2, *n3, *n4, *head, *p, *end;
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

        if (i == 0)
        {
            head = p;
            end = p;
            i=1;
        }
        else
        {
            //end = updatelist (end, p);
            end->p = p;
            end = p;
        }
    }


     printlist (head);





    return 0;
}
