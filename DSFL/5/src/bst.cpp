/*
 * bst.cpp
 *
 *  Created on: 17-Feb-2020
 *      Author: dsflh-10
 */

#include "bst.h"
#include<iostream>
using namespace std;

bst::bst() {

	root = NULL;

}

bst::~bst() {
	// TODO Auto-generated destructor stub
}

bool bst::isempty() {
	if(root == NULL)
		return false;
	else
		return true;
}

void bst::insert(int key) {

	if(root != NULL) {
		Insert(key,root);
	}
	else {
		root = new node;
		root->data = key;
		root->right = NULL;
		root->left = NULL;
	}
}

void bst::Insert(int key, node* temp) {

	if(temp->data > key) {
		if(temp->left != NULL) {
			Insert(key,temp->left);
		}
		else {
			temp->left = new node;
			temp->left->data = key;
			temp->left->left = NULL;
			temp->left->right = NULL;
		}
	}

	if(temp->data < key) {
		if(temp->right != NULL)
			Insert(key,temp->right);

		else {
			temp->right = new node;
			temp->right->data = key;
			temp->right->left = NULL;
			temp->right->left = NULL;
		}
	}
}

void bst::display(node* temp) {
	if(temp!=NULL ) {
		display(temp->left);
		cout<<"  "<<temp->data;
		display(temp->right);
	}

}

node* bst:: getRoot() {
	return root;
}
