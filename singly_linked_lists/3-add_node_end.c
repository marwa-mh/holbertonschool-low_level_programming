#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int _strlen(const char *str)
{
    int len= 0;

    while(*str !='\0')
    {
    len++;
    str++;
    }
    return len;
}
list_t *add_node_end(list_t **head, const char *str)
{

    list_t* new_node =malloc(sizeof(list_t));

   list_t *ptr =*head;
  if(!new_node)
  return (NULL);
   new_node->str =strdup(str);
   new_node->len=_strlen(str);
   new_node->next = NULL;

   if (!*head)
   {

       *head = new_node;
   ptr = new_node;
   }

  while((*head)->next != NULL)
  {
      *head = (*head)->next;
  }
if (*head != new_node)
(*head)->next=new_node;
  *head = ptr;
  return new_node;

}
