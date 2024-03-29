#include "hash_tables.h"

/**
 * hash_table_set - puts key in table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 0 on failure 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *keyStr = NULL;
	hash_node_t *newNode = NULL;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL || value == NULL)
		return (0);
	keyStr = strdup(key);
	index = key_index((unsigned char *) keyStr, ht->size);


	if (ht->size == 0)
		return (1);/* this could be (1) if it is considered a success*/
	if (ht->array == NULL)
		return (0);

	if (ht->array[index] != NULL && strcmp(keyStr, ht->array[index]->key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		free(keyStr);
		return (1);
	}
	newNode = malloc(sizeof(hash_node_t));
	newNode->value = strdup(value);
	newNode->key = keyStr;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
