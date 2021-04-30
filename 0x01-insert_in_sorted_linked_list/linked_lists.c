n)
{
  listint_t *new;
  listint_t *current;

  current = *head;

  new = malloc(sizeof(listint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->next = NULL;

  if (*head == NULL)
    *head = new;
  else
    {
      while (current->next != NULL)
	current = current->next;
      current->next = new;
    }

  return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
  listint_t *current;

  while (head != NULL)
    {
      current = head;
      head = head->next;
      free(current);
    }
}
