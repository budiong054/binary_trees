# 0x1D. C - Binary trees
> Implementation of Binary Tree, Binary Search Tree, AVL Tree and Max Binary Heap data structure in C using the user defined data type `struct`

## Data structures
* **Basic Binary Tree**
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

* **Binary Search Tree**
```
typedef struct binary_tree_s bst_t;
```

* **AVL Tree**
```
typedef struct binary_tree_s avl_t;
```

* **Max Binary Heap**
```
typedef struct binary_tree_s heap_t;
```

### Header file
[binary\_trees.h]() contains all the standard header files and function prototypes used in this project

## Tasks
---

### 0. New node
[0-binary\_tree\_node.c]() creates a binary tree node
	- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`

### 1. Insert left
[1-binary\_tree\_insert\_left.c]() inserts a node as the left-child of another node
	- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
	- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### 2. Insert right
[2-binary\_tree\_insert\_right.c]() inserts a node as the right-child of another node
	- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
	- If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### 3. Delete
[3-binary\_tree\_delete.c]() deletes an entire binary tree
	- Prototype: `void binary_tree_delete(binary_tree_t *tree);`

### 4. Is leaf
[4-binary\_tree\_is\_leaf.c]() checks if a node is a leaf
	- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`

### 5. Is root
[5-binary\_tree\_is\_root.c]() checks if a given node is a root
	- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
