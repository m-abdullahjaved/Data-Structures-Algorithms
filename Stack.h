#ifndef STACK_H
#define STACK_H

#include "List.h"

template<class STACKTYPE>
class Stack : private List<STACKTYPE> {
public:
	void push(const STACKTYPE& value) {
		List<STACKTYPE>::insertAtFront(value);
	}
	bool pop(STACKTYPE& value) {
		return List<STACKTYPE>::removeFromFront(value);
	}
	bool isStackEmpty() const {
		return List<STACKTYPE>::isEmpty();
	}
	void printStack() const {
		return List<STACKTYPE>::print();
	}
};

#endif // !STACK_H