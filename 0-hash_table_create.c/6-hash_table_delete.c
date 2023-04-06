#include "hash_tables.h"
void delete_node(hash_node_t *);
/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table to delete.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int id = 0;
	while (id < ht->size)
	{
		if (ht->array[id])
		{
			node = ht->array[id];
			delete_node(node);
		}
		id++;
	}
	free(ht->array);
	free(ht);
}
/**
 * delete_node - deletes a bucket
 * @node: nodes to delete
 */
void delete_node(hash_node_t *node)
{
	hash_node_t *tmp;

	while (node)
	{
		tmp = node;
		free(node->key);
		if (node->value)
			free(node->value);
		node = node->next;
		free(tmp);
	}
}
