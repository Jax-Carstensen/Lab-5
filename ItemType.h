/*
   Name: Jax Carstensen
   Semester: 2
   Due: 03/19/2021
   Assignment: Lab 5 (Binary Tree)
   Description:  Description: Create a binary tree class which will take strings of website names and sort 
   them in alphabetical order. Your class should also be able to sort them in reverse alphabetical order as well.
*/
#ifndef ITEMTYPE_H
#define ITEMTYPE_H
typedef int type;


class ItemType {
private:
	type value;
	enum RelationType {
		LESSER,
		GREATER,
		EQUAL
	};
public:
	ItemType() { value = 0; }
	ItemType(type newValue) { value = newValue; }

	RelationType ComparedTo(ItemType otherItem) {
		if (value > otherItem.getValue())
			return GREATER;
		else if (value < otherItem.getValue())
			return LESSER;
		return EQUAL;
	}
	//Pre:  An ItemType to compare to
	//Post: GREATER if this ItemType's value is higher, LESSER if it is lesser, and EQUAL if the values are the same

	void setValue(type newValue) { value = newValue; }
	//Pre:  An int (in this case) to set this item's value to
	//Post: Sets this item's value to the provided one

	type getValue() { return value; }
	//Pre:  None
	//Post: Returns this item's value
};
#endif