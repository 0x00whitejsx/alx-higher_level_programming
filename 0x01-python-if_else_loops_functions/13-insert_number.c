#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_node - Insert node in order mode to linked list
 * @head: pointer to the head of the linked list
 * @number: number to be added
 * Return: the address of the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
    // Allocate memory for the new node
    listint_t *new = malloc(sizeof(listint_t));
    if (!new)
        return (NULL);

    new->n = number;  // Set the value of the new node to the given number

    // If the list is empty or the number to be added is smaller than the first node
    if (*head == NULL || (*head)->n > number)
    {
        new->next = *head;
        *head = new;  // Update the head to point to the new node
        return (new);
    }

    // Traverse the list to find the correct position to insert the new node
    listint_t *current = *head;
    while (current->next && current->next->n < number)
    {
        current = current->next;
    }

    // Insert the new node into the list
    new->next = current->next;
    current->next = new;

    return (new);
}

