#ifndef STACKCOMPOSITION
#define STACKCOMPOSITION

#include "List.h"

template<class STACKTYPE>
class Stack {
private:
	List<STACKTYPE> stackList;
public:
	void push(const STACKTYPE& value) {
		stackList.insertAtFront(value);
	}
	bool pop(STACKTYPE& value) {
		return stackList.removeFromFront(value);
	}
	bool isStackEmpty() const {
		return stackList.isEmpty();
	}
	void printStack() const {
		stackList.print();
	}
};

#endif // !STACKCOMPOSITION
