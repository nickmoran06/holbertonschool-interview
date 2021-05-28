#include "lists.h"

/**
 * is_palindrome - check if a single linked list is palindrome
 * @head: single linked list head
 * Return: 1 if is palindrome, 0 if it's not palindrome and
 */

int is_palindrome(listint_t **head)
{
	int palindrome = 0;
	listint_t *left_value, *right_value;

	left_value = (*head);
	right_value = (*head);

	if (head == NULL)
		return (1);

	palindrome = check_values(&left_value, right_value);
	return (palindrome);
}


/**
 * check_values - user recursive condition to mote to last element in a linked
 * list, and compare
 * @left_value: left value to compare to right value
 * @right_value: right value to compare  to left value
 * Return: 1 if is palindrome, else return 0
 */

int check_values(listint_t **left_value, listint_t *right_value)
{
	int b = 0;

	if (right_value == NULL)
		return (1);

	b = check_values(left_value, right_value->next);

	if (b == 1)
	{
		if ((*left_value)->n == right_value->n)
		{
			(*left_value) = (*left_value)->next;
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
