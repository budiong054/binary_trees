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
[binary\_trees.h](https://github.com/budiong054/binary_trees/blob/master/binary_trees.h) contains all the standard header files and function prototypes used in this project

## Tasks

### 0. New node
[0-binary\_tree\_node.c](https://github.com/budiong054/binary_trees/blob/master/0-binary_tree_node.c) creates a binary tree node
- Prototype: 
```
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

### 1. Insert left
[1-binary\_tree\_insert\_left.c](https://github.com/budiong054/binary_trees/blob/master/1-binary_tree_insert_left.c) inserts a node as the left-child of another node
- Prototype: 
```
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```
- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### 2. Insert right
[2-binary\_tree\_insert\_right.c](https://github.com/budiong054/binary_trees/blob/master/2-binary_tree_insert_right.c) inserts a node as the right-child of another node
- Prototype: 
```
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```
- If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### 3. Delete
[3-binary\_tree\_delete.c](https://github.com/budiong054/binary_trees/blob/master/3-binary_tree_delete.c) deletes an entire binary tree
- Prototype: 
```
void binary_tree_delete(binary_tree_t *tree);
```

### 4. Is leaf
[4-binary\_tree\_is\_leaf.c](https://github.com/budiong054/binary_trees/blob/master/4-binary_tree_is_leaf.c) checks if a node is a leaf
- Prototype: 
```
int binary_tree_is_leaf(const binary_tree_t *node);
```

### 5. Is root
[5-binary\_tree\_is\_root.c](https://github.com/budiong054/binary_trees/blob/master/5-binary_tree_is_root.c) checks if a given node is a root
- Prototype: 
```
int binary_tree_is_root(const binary_tree_t *node);
```

### 6. Pre-order traversal
[6-binary\_tree\_preorder.c](https://github.com/budiong054/binary_trees/blob/master/6-binary_tree_preorder.c) goes through a binary tree using pre-order traversal
- Prototype: 
```
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```
- If `tree` or `func` is NULL, do nothing

### 7. In-order traversal
[7-binary\_tree\_inorder.c](https://github.com/budiong054/binary_trees/blob/master/7-binary_tree_inorder.c) goes through a binary tree using in-order traversal
- Prototype: 
```
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```
- If `tree` or `func` is NULL, do nothing

### 8. Post-order traversal
[8-binary\_tree\_postorder.c](https://github.com/budiong054/binary_trees/blob/master/8-binary_tree_postorder.c) goes through a binary tree using post-order traversal
- Prototype: 
```
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```
- If `tree` or `func` is NULL, do nothing

### 9. Height
[9-binary\_tree\_height.c](https://github.com/budiong054/binary_trees/blob/master/9-binary_tree_height.c) measures the height of a binary tree
- Prototype: 
```
size_t binary_tree_height(const binary_tree_t *tree);
```
- If `tree` is NULL, your function must return 0

### 10. Depth
[10-binary\_tree\_depth.c](https://github.com/budiong054/binary_trees/blob/master/10-binary_tree_depth.c) measures the depth of a node in a binary tree
- Prototype: 
```
size_t binary_tree_depth(const binary_tree_t *tree);
```
- If `tree` is NULL, your function must return 0

### 11. Size
[11-binary\_tree\_size.c](https://github.com/budiong054/binary_trees/blob/master/11-binary_tree_size.c) measures the size of a binary tree
- Prototype: 
```
size_t binary_tree_size(const binary_tree_t *tree);
```
- If `tree` is NULL, the function must return 0
