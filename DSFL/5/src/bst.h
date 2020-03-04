/*
 * bst.h
 *
 *  Created on: 26-Feb-2020
 *      Author: guest-zvmxzv
 */

#ifndef BST_H_
#define BST_H_
typedef struct node {
	int data;
	node *left;
	node *right;
}node;
class bst {

	node *root;
public:
	bst();
	virtual ~bst();
	void insert(int );
	void Insert(int , node* root);
	void display(node *root);
	void display();
	node *getRoot();
	int search(int, node *);
	void mirror(node*);
	void displaylevelwise();
	node *deletenode(node*,int);
	int getheight(node*);

};

#endif /* BST_H_ */
