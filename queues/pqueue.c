#include <stdio.h>
#include <stdlib.h>
#include "pqueue.h"

Node* make_node(int data, int weight)
{
    Node* new = malloc(sizeof(Node));
    if (new == NULL) {
        print("Memory allocation failed\n");
        exit(1);
    }
    new->val = data;
    new->weight = weight;
    new->next = NULL;

    return new;
}

void sortedAppend(Node** head, int val, int weight)
{
    Node* start = *head;

    Node* temp = make_node(val, weight);

    if ((*head)->weight > temp->weight)
    {
        temp->next = *head;
        *head = temp;
    } else {
        while (start->next != NULL && start->next->weight <= temp->weight)
        {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
}