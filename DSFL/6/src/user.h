/*
 * user.h
 *
 *  Created on: 02-Mar-2020
 *      Author: dsflh-10
 */

#ifndef USER_H_
#define USER_H_
#include<iostream>
using namespace std;
struct node {
	string name;
	int comments;
	node* down;
	node* right;
};
class user {
	node *User;
	node *next;
public:
	void register();
	void display();
	node *BFS();
	node *DFS();
	user();
	virtual ~user();
};


#endif /* USER_H_ */
