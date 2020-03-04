/*
 * user.cpp
 *
 *  Created on: 02-Mar-2020
 *      Author: dsflh-10
 */

#include "user.h"
#include<iostream>
using namespace std;

user::user() {
	// TODO Auto-generated constructor stub
	User = NULL;

}

user::~user() {
	// TODO Auto-generated destructor stub
}

void user::registerF(int n, string Name) {
	node *temp = new node;
	node *temp1;
	temp->comments = n;
	temp->name = Name;
	temp->down = NULL;
	temp->right = NULL;

	if(User == NULL) {
		User = temp;
	}
	temp1 = User
	else {
		while(temp1->down != NULL)
			temp1 = temp1->down;

		temp1->down = temp;
	}
}

void user::friends(string name) {
	if(User == NULL) {
		return;
	}
	node *temp1;
	temp1 = User;

	while(temp1->down != NULL) {
		if(temp1->name == name) {

		}
	}
}
