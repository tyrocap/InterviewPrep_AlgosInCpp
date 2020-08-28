"//Delete kth element from list" 


// Assumes L has at least k nodes, deletes the k-th last node in L.
shared_ptr<ListNode<int>> RemoveKthLast(const shared_ptr<ListNode<int>>& L,
    int k) {
    shared_ptr<ListNode<int>> A;
    auto dummy_head = make_shared<ListNode<int>>(ListNode<int>{0, L});
  // TODO - you fill in here.
    auto slow = dummy_head, fast = dummy_head;
    while (k-- + 1) {
        fast = fast->next;
    }
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return dummy_head->next;
}


