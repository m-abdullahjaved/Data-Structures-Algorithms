#ifndef LISTNODE_H
#define LISTNODE_H

template<class NODETYPE> class List;

template<class NODETYPE>
class ListNode {
	friend class List<NODETYPE>;
public:
	ListNode(const NODETYPE&);
	NODETYPE getData() const;
private:
	NODETYPE data;
	ListNode<NODETYPE> *nextPtr;
};

template<class NODETYPE>
ListNode<NODETYPE>::ListNode(const NODETYPE& info): data(info),nextPtr(0) {}

template<class NODETYPE>
NODETYPE ListNode<NODETYPE>::getData() const {
	return data;
}

#endif // !LISTNODE_H
