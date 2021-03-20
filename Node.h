/*
   Name: Jax Carstensen
   Semester: 2
   Due: 03/19/2021
   Assignment: Lab 5 (Binary Tree)
   Description:  Description: Create a binary tree class which will take strings of website names and sort
   them in alphabetical order. Your class should also be able to sort them in reverse alphabetical order as well.
*/
#ifndef NODE_H
#define NODE_H

#include "ItemType.h"

class Node {
public:
	ItemType value;
	Node* right = NULL;
	Node* left = NULL;
	Node() {}
	Node(ItemType newValue) {
		value = newValue;
	}
	~Node() {
		delete right;
		delete left;
	}
};

#endif