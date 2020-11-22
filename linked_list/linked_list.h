#include <bits/stdc++.h>
using namespace std;

// Node of the linked list
class ListNode {
  int val;
  ListNode *next;
public:
  // Constructor
  ListNode(int val) {
    this->val = val;
    this->next = NULL;
  }

  void setNext(ListNode *next) {
    this->next = next;
  }

  ListNode *getNext() {
    return this->next;
  }

  int getVal() {
    return this->val;
  }
};


class LinkedList {
private:
  ListNode *head;

public:
  LinkedList() {
    this->head = NULL;
  }

  // add at the front of the list.
  void insert(int val) {
    ListNode *newNode = new ListNode(val);
    newNode->setNext(this->head);
    this->head = newNode;
  }

  // add at the back of the list.
  void append(int val) {
    ListNode *newNode = new ListNode(val);
    if (this->head == NULL) {
      newNode->setNext(this->head);
      this->head = newNode;
      return;
    }

    // else append to the last of the node.
    ListNode *last = this->head;
    while (last->getNext() != NULL)
      last = last->getNext();

    newNode->setNext(last->getNext());
    last->setNext(newNode);
    return;
  }

  void printList() {
    ListNode *n = this->head;
    while (n != NULL) {
      cout << n->getVal() << endl;
      n = n->getNext();
    }
  }

  ListNode *getHead() {
    return this->head;
  }
};
