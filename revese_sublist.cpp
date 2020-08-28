"//reverse sublist" 


shared_ptr<ListNode<int>> ReverseSublist(shared_ptr<ListNode<int>> L, int start,
                                         int finish) {
  // TODO - you fill in here.
    if (start == finish) {
        return L;
    }

    auto dummy_head = make_shared<ListNode<int>>(ListNode<int>{0, L});
    auto sublist_head = dummy_head;
    int k = 1;
    while (k++ < start) {
        sublist_head = sublist_head->next;
    }

    // Reverse sublist
    auto sublist_iter = sublist_head->next;
    while (start++ < finish) {
        auto temp = sublist_iter->next;
        sublist_iter->next = temp->next;
        temp->next = sublist_head->next;
        sublist_head->next = temp;
    }
    return dummy_head->next;
}


