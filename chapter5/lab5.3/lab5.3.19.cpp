#include <iostream>

using namespace std;

class Node
{
public:
	Node(int val);
	~Node();
	int value;
	Node* next;
};
Node::Node(int val) : value(val), next(nullptr)
{
	
}
Node::~Node()
{
	
}


class List
{
public:
	List();
	List(List &other);
	void push_front(int value);
	bool pop_front(int &value);
	void push_back(int value);
	bool pop_back(int &value);
	int at(int index);
	void insert_at(int index, int value);
	void remove_at(int index);
	int size() { return listSize; }
private:
	int listSize;
	Node* head;
	Node* tail;
};

List::List() : head(nullptr), tail(nullptr), listSize(0)
{
}

List::List(List &other)
{
	Node* oldHead = other.head;
	Node* newHead = new Node(other.head->value);
	head = newHead;
	for (int i = 1; i < other.listSize; i++)
	{
		Node* newChild = new Node(oldHead->next->value);
		newHead->next = newChild;
		oldHead = oldHead->next;
		newHead = newHead->next;
	}
}

void printList(List list)
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << "list[" << i << "] == " << list.at(i) << endl;
	}
}

void List::push_front(int value)
{
	Node* new_head = new Node(value);

	if (listSize == 0) tail = new_head;

	new_head->next = head;
	head = new_head;
	listSize++;
}

void List::push_back(int value)
{
	Node *new_tail = new Node(value);

	listSize == 0 ? head = new_tail : tail->next = new_tail;

	tail = new_tail;
	listSize++;
}

bool List::pop_front(int &value)
{
	Node *popped = head;

	if (popped == NULL) return false;

	head = head->next;
	value = popped->value;
	delete popped;
	listSize--;

	return true;
}

bool List::pop_back(int &value) {

	if (!listSize) return false;

	Node *popped = tail;

	if (listSize == 1) {
		head = NULL;
		tail = NULL;
	}
	else {
		Node *penult = head;
		while (penult->next != tail) {
			penult = penult->next;
		}
		penult->next = NULL;
		tail = penult;
	}

	value = popped->value;
	delete popped;
	listSize--;

	return true;
}

int List::at(int index) {

	Node *n = head;
	int counter = 0;
	while (n != nullptr)
	{
		if (counter == index)
			return n->value;
		counter++;
		n = n->next;
	}
	delete n;
	return -1;
}

void List::insert_at(int index, int value) {

	Node* newNode = new Node(value);
	Node* indexNode = head;
	Node* preIndexNode = head;

	if (!index)
	{
		newNode->next = indexNode;
		head = newNode;
	}
	else
	{

		for (int i = 0; i < index; i++)
		{
			preIndexNode = indexNode;
			indexNode = indexNode->next;
		}
		preIndexNode->next = newNode;
		newNode->next = indexNode;
	}

	listSize++;
}

void List::remove_at(int index) {

	if ((head != NULL) && (index < listSize) && (index >= 0))
	{
		Node *indexNode = head, *preIndexNode = head;

		for (int i = 0; i < index; i++)
		{
			preIndexNode = indexNode;
			indexNode = indexNode->next;
		}

		indexNode == head ? head = indexNode->next : preIndexNode->next = indexNode->next;

		listSize--;
	}
}

int main() {
	List list1;
	list1.push_front(1);
	list1.push_front(2);
	list1.push_front(3);
	list1.push_front(4);

	cout << "list1" << endl;
	printList(list1);
	cout << endl;

	List list2(list1);
	cout << "list2" << endl;
	printList(list2);
	cout << endl;

	list1.insert_at(1, 6);

	list2.remove_at(2);
	cout << "list1" << endl;

	printList(list1);
	cout << "list2" << endl;

	printList(list2);
	cout << endl;

	return 0;
}