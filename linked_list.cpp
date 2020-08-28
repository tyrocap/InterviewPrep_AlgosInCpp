"//Linked Lists" 

template <typename T>
struct ListNode
{
	T data;
	shared_ptr<ListNode<T>> next;

};

shared_ptr<ListNode<int>> SearchList(shared_ptr<ListNode<int>> L, int key) {
	while (L && L->data != key) {
		L = L->next;
	}
	return L;
}


//Insert new_node after node.
void InsertAfter(const shared_ptr<ListNode<int>>& node,
	const shared_ptr<ListNode<int>>& new_node) {
	new_node->next = node->next;
	node->next = new_node;
}


// Delete the node past this one. Assume node is not a tail.
void DeleteAfter(const shared_ptr<ListNode<int>>& node) {
	node->next = node->next->next;
}
