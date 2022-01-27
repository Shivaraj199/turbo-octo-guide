#include <iostream>
//#include <stdio>
#include <vector>
#include <cassert>

using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  // Write your code here.
  return nullptr;
}


LinkedList *addMany(LinkedList *linkedList, vector<int> values) {
  LinkedList *current = linkedList;
  while (current->next != nullptr) {
    current = current->next;
  }
  for (auto value : values) {
    current->next = new LinkedList(value);
    current = current->next;
  }
  return linkedList;
}

vector<int> getNodesInArray(LinkedList *linkedList) {
  vector<int> nodes;
  LinkedList *current = linkedList;
  while (current != nullptr) {
    nodes.push_back(current->value);
    current = current->next;
  }
  return nodes;
}



int main (){
      auto input = addMany(new LinkedList(1), vector<int>{1, 3, 4, 4, 4, 5, 6, 6});
      auto expected = addMany(new LinkedList(1), vector<int>{3, 4, 5, 6});
      cout<<"Test";
      auto actual = removeDuplicatesFromLinkedList(input);

}
