/* This file declares (but does not define) the basic multimap type, and also
 * the basic operations that we can perform on a multimap.
 *
 * This multimap maps 32-bit signed integer keys to 32-bit signed integer
 * values.  Keys are kept in sorted order; for a given key, the values are not
 * kept in any particular order.
 */

#ifndef MULTIMAP_H
#define MULTIMAP_H


typedef struct multimap multimap;


/* Allocate and initialize a multimap data structure. */
multimap * init_multimap();

/* Release all dynamically allocated memory associated with the multimap
 * data structure, but not the multimap itself.
 */
void clear_multimap(multimap *mm);

/* Adds the specified (key, value) pair to the multimap. */
void mm_add_value(multimap *mm, int key, int value);

/* Returns nonzero if the multimap contains the specified key-value, zero
 * otherwise.
 */
int mm_contains_key(multimap *mm, int key);

/* Returns nonzero if the multimap contains the specified (key, value) pair,
 * zero otherwise.
 */
int mm_contains_pair(multimap *mm, int key, int value);

/* Performs an in-order traversal of the multimap, passing each (key, value)
 * pair to the specified function.
 */
void mm_traverse(multimap *mm, void (*f)(int key, int value));

#endif

