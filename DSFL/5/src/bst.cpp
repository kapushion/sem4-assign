/*
 * bst.cpp
 *
 *  Created on: 26-Feb-2020
 *      Author: guest-zvmxzv
 */

#include "bst.h"
#include <iostream>
#include<queue>
using namespace std;
bst::bst() {
	// TODO Auto-generated constructor stub
root = NULL;
}

bst::~bst() {
	// TODO Auto-generated destructor stub
}

void bst::insert(int key) {
	if(root != NULL) {
		Insert(key,root);
	}
	else {
		root = new node;
		root->data = key;
		root->left = NULL;
		root->right = NULL;
	}
}

void bst::Insert(int key, node *t) {
	if(t==NULL) {
		return;
	}

	if(t->data <key) {
		if(t->right != NULL) {
			Insert(key,t->right);
		}
		else {
			t->right = new node;
			t->right->data = key;
			t->right->right = NULL;
			t->right->left = NULL;
		}
	}

	if(t->data > key) {
		if(t->left != NULL) {
			Insert(key, t->left);
		}
		else {
			t->left = new node;
			t->left->data = key;
			t->left->left = NULL;
			t->left->right = NULL;
		}
	}
}

void bst::display() {
	if(root == NULL )
		cout<<"\n\nBST is empty\n\n";

	else {
		display(root);
	}
}

void bst :: display(node *t) {
	if(t) {
		display(t->left);
		cout<<" "<<t->data;
		display(t->right);
	}
}

node* bst::getRoot() {
	return root;
}

int bst::search(int key, node* t) {
	if(t==NULL) {
		cout<<"\n\nBST is empty";
		return 0;
	}
	else {
		if(t->data == key) {
			return 1;
		}
		else if(t->data < key) {
			if(t->left != NULL ) {
				search(key,t->left);
			}
			else
				return 0;
		}
		else if(t->data > key){
			if(t->right != NULL) {
				search(key,t->right);
			}
			else
				return 0;
		}
		return -1;
	}


}

void bst::mirror(node *r)
{
	node* temp;

	if(r!=NULL)
	{
		temp=r->left;
		r->left=r->right;
		r->right=temp;

		mirror(r->left);
		mirror(r->right);
	}
	else
		return;
}

void bst::displaylevelwise()
{
	queue<node *> q;
	node *current;
	node *temp=root;

	if(temp==NULL)
	{
		cout<<"\nCreate a tree first"<<endl;
		return;
	}
	q.push(temp);
	q.push(NULL);


	while(q.size()>1)
	{
		current = q.front();
		q.pop();

		if(current==NULL)
		{
			q.push(NULL);
			cout<<endl;
		}
		else
		{
			if(current->left)
				q.push(current->left);
			if(current->right)
				q.push(current->right);

			cout<<current->data<<"  ";
		}
	}
}

node* bst::deletenode(node* t,int data)
{
	node *temp;

	if(t == NULL)
	{
		return t;
	}
	else if(data < t->data)
	{
		t->left = deletenode(t->left, data);
		return t;
	}
	else if(data > t->data)
	{
		t->right = deletenode(t->right, data);
		return t;
	}
	else
	{

		if(t->left == NULL && t->right == NULL)
		{
			temp = t;
			delete temp;
			return NULL;
		}

		if(t->left == NULL)
		{
			temp = t;
			t = t->right;
			delete temp;
			return t;
		}
		if(t->right == NULL)
		{
			temp = t;
			t = t->left;
			delete temp;
			return t;
		}

		temp = t->right;

		while(temp->left != NULL)
			temp = temp->left;

		t->data = temp->data;
		t->right = deletenode(t->right, temp->data);
		return t;
	}
	return NULL;
}
int bst::getheight(node* t)
{
	int left=0,right=0;
	if(t==NULL)
		return -1;
	else
	{
		left=getheight(t->left);
		right=getheight(t->right);
	}
	return max(left,right)+1;
}


