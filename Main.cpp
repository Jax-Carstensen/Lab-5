/*
   Name: Jax Carstensen
   Semester: 2
   Due: 03/19/2021
   Assignment: Lab 5 (Binary Tree)
   Description:  Description: Create a binary tree class which will take strings of website names and sort
   them in alphabetical order. Your class should also be able to sort them in reverse alphabetical order as well.
*/
#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {
	BinaryTree tree;
	tree.Add(50);
	tree.Add(100);
	tree.Add(25);
	tree.Add(33);
	tree.Add(65);
	tree.Add(13);
	tree.Print();
}