"//List cyclic right shift" 


shared_ptr<ListNode<int>> CyclicallyRightShiftList(shared_ptr<ListNode<int>> L,
                                                   int k) {
  // TODO - you fill in here.
    if (L == nullptr) {
        return L;
    }

    // Compute the length of L and the tail.
    auto tail = L;
    int n = 1;
    while (tail->next) {
        ++n, tail = tail->next;
    }
    k %= n;
    if (k == 0) {
        return L;
    }

    tail->next = L;
    int steps_to_new_head = n - k;
    auto new_tail = tail;
    while (steps_to_new_head--) {
        new_tail = new_tail->next;
    }
    auto new_head = new_tail->next;
    new_tail->next = nullptr;
    return new_head;
}

