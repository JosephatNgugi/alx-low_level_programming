# Singly Linked Lists
Linked lists are dynamic data structures that can grow or shrink as needed. They consist of a sequence of nodes, each containing a data element and a reference to the next node in the sequence and the last node in the list referencing to NULL.
Because linked lists are not stored in contiguous memory, accessing elements in a linked list requires iterating over the nodes until the desired element is found."\n"
However, linked lists have the advantage of being able to add or remove elements easily, which makes them more flexible than arrays.

### When to use arrays:

- When you know the size of the collection of data ahead of time
- When you need constant-time access to any element
- When you need to iterate over the entire collection frequently

### When to use linked lists:

- When the size of the collection of data is unknown ahead of time
- When you need to add or remove elements frequently
- When you don't need constant-time access to any element

* To build a linked list, you need to:
- create a node structure that holds the value of the node and a pointer to the next node in the list:
```
typedef struct node {
    int value;
    struct node *next;
} node_t;
```

- then create a new linked list, you need to create a head node and set the next pointer to `NULL` to indicate the end of the list:
```
node_t *head = NULL;
```

- To add a new node to the beginning of the linked list, you create a new node, set its value, and set its `next` pointer to the current head of the list. Then, you update the head pointer to point to the new node:

```
node_t *new_node = malloc(sizeof(node_t));
new_node->value = 42;
new_node->next = head;
head = new_node;
```

- To traverse a linked list, you start at the head node and follow the `next` pointer until you reach the end of the list (where the `next` pointer is `NULL`):

```
node_t *current = head;
while (current != NULL)
{
	printf("%d ", current->value);
	current = current->next;
}
```

- To delete a node from the linked list, you need to update the next pointer of the previous node to point to the next node, and then free the memory of the deleted node:

```
void deleteNode(node_t **head, int key) {
	node_t *previous = NULL;
	node_t *current = head;

	// If head node itself holds the key to be deleted
	if (current != NULL && current->value == key) {
        	*head = current->next;
        	free(temp);
        	return;
	}
    	// Search for the key to be deleted,
	// keep track of the previous node as well
	while (current != NULL && current->data != key) {
		previous = current;
		current = current->next;
	}
	// If key was not present in linked list
	if (current == NULL) {
        	return;
	}
	// Unlink the node from linked list
	previous->next = current->next;
	// Free memory
	free(temp);
```

