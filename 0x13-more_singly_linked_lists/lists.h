#ifndef _h_
#define _h_
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
listint_t *add_nodeint_end(listint_t **head, const int n);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
int pop_listint(listint_t **head);
#endif
