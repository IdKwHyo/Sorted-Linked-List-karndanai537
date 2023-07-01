// self-referential structure
#include <iomanip>
class Node {
private:
  int value;
  Node *nextPtr;
  Node *pPtr; // for doubly linked list

public:
  Node(int x = 0);
  ~Node();
  Node* get_next();

  int get_data();
  void set_next(Node *t);
     //modify to set previous as well
  void set_prev(Node *t);
  Node* get_prev();

  void print();

  // for doubly linked list
  /*
  Node * get_prev();
  void set_prev(Node* t);
  */
};

typedef Node *NodePtr; // synonym for Node*

Node::Node(int x) {
  value = x;
  nextPtr = NULL;
  pPtr=NULL;
}

Node::~Node() { cout << value << " deleted" << endl; }

NodePtr Node::get_next() { return nextPtr; }

int Node::get_data() { return value; }
/*
          previousPtr->set_next(newPtr);
         newPtr->set_next(currentPtr);
*/
void Node::set_next(NodePtr t) {
       this->nextPtr = t; //previousPtr->nextPtr=t;
      
}

void Node::print(){
  cout << setw(3) << value;
}


void Node::set_prev(NodePtr t) {
       pPtr = t; //previousPtr->nextPtr=t;
      
}

NodePtr Node::get_prev() { return pPtr; }