#ifndef __DATATYPES_H__
#define __DATATYPES_H__

#include <cstdlib>

struct LidarDatapoint {
	int16_t theta;
	int16_t radius;

	int16_t x;
	int16_t y;
};

/**
   Struct for a node in a DoublyLinkedList
   A DoublyLinkedListNode is of a certain
   type, T.
 */
template <typename T>
struct DoublyLinkedListNode {
	/**
	   Pointer to the data
	 */
	T * data;
	/**
	   Pointer to the next
	   node in the list
	*/
	DoublyLinkedListNode<T> * next;
	/**
	   Pointer to the previous
	   node in the list
	*/
	DoublyLinkedListNode<T> * prev;
};

#endif // __DATATYPES_H__
