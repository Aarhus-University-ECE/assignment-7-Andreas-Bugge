#include "stack.h"
#include <assert.h>

void initialize(stack *s)
{
  //sinkre sig at den den øverste pointer bliver NULLED//
  s->head = NULL;
}

void push(int x, stack *s)
{
    //skubber den næste stack til toppen af stacken//
    node *new_top = (node *)malloc(sizeof(node));
    new_top->data = x;
    new_top->next = s->head;
    s->head = new_top;
}
int pop(stack *s)
{
    // tager dataen fra top stacken og befrier den//
    node *t = s->head;
    s->head= t->next;
    int hold = t->data;
    free(t);
  return hold;
}

bool empty(stack *s)
{
    //indikere med true hvis den øverste info er blevet NULLED//
    if (s->head == NULL)
    {
      return true;
    }
    else 
    return false;
}

/*bool full(stack *s) 
{
    //Det er ikke muligt for stacken at blive fyld, da den kan ændre sig dynamisk
  return;
}
*/