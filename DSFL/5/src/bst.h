/*
 * bst.h
 *
 *  Created on: 17-Feb-2020
 *      Author: dsflh-10
 */

#ifndef BST_H_
#define BST_H_
class node {
public:
	int data;
	node *left;
	node *right;

	friend class bst;
};
class bst {
	node *root;
public:
	bst();
	virtual ~bst();
	void insert(int );
	void Insert(int ,node* );
	void display(node*);
	bool isempty();
	node* getRoot();
};



#endif /* BST_H_ */
