#include "linked_list.h"


bool detectCycle(LinkedList *list) {

  unordered_set <ListNode* node> memo;

  // iterate through the memo and get the items.
  ListNode *head = list->getHead();

  while (head != NULL) {
    if (memo.find(head) != memo.end()) {
      return true;
    }
    memo.insert(head);
    head = head->getNext();
  }

  return false;

}

bool detectCycleLinear(LinkedList *list) {
  ListNode *slow = list->getHead(), fast = list->getHead();

  while (slow != NULL && fast != NULL && fast->getNext() != NULL) {
    if (slow == fast) {
      return true;
    }
    slow = slow->getNext();
    fast = fast->getNext()->getNext();
  }

  return false;
  
}

int main() {

  LinkedList llist;

  llist.append(3);
  llist.append(23);
  llist.append(12);
  llist.append(15);

  // create a cycle in the linked list.
  ListNode *cycle = llist.getHead()->getNext()->getNext();

  if (detectCycle(llist)) {
    cout << "Cycle" << endl;
  } else {
    cout << "No cycle" << endl;
  }

  return 0;
}
