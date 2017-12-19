#include <iostream>
#include <string>

using namespace std;


class Node
{
public:
	Node(int val);
	~Node();
	int value;
	Node* next;
	Node* prev;
};


Node::Node(int val) : value(val), next(nullptr), prev(nullptr)
{
}


Node::~Node()
{
}


class List
{
public:
	List();
	List(List& list);
	~List();
	void push_front(int value);
	void push_back(int value);
	Node* pop_front();
	Node* pop_back();
	int size();
	int at(int index);
	void insert_at(int index, int value);
	void remove_at(int index);
private:
	Node* head;
	Node* tail;
};


List::List() : head(nullptr), tail(nullptr)
{
}

List::List(List& list)
{
	this->head = nullptr;
	this->tail = nullptr;
	for (int i = 0; i < list.size(); i++)
	{
		this->push_back(list.at(i));
	}
}


List::~List()
{
	Node* k = this->pop_front();
	while (k != nullptr)
	{
		delete k;
		k = this->pop_front();
	}
	delete this->head;
}


void List::push_front(int value)
{
	Node* new_head = new Node(value);
	
	new_head->next = this->head;
	if (this->head != nullptr) this->head->prev = new_head;
	if (this->size() == 0)
	{
		this->tail = new_head;
	}
	this->head = new_head;
}


void List::push_back(int value)
{
	Node* new_head = new Node(value);
	if (this->size() > 0)
	{
	
		(this->tail)->next = new_head;
		
		new_head->prev = this->tail;
	}
	if (this->size() == 0)
	{
		this->head = new_head;
	}
	this->tail = new_head;
}


Node* List::pop_front()
{
	if (this->head != nullptr)
	{
		
		Node* k = this->head;
		
		this->head = k->next;
		
		if (this->head != nullptr) this->head->prev = nullptr;
		return k;
	}
	return nullptr;
}


Node* List::pop_back()
{
	if (this->tail != nullptr)
	{
		if (this->size() == 1)
		{
			Node*k = this->tail;
			this->tail = nullptr;
			this->head = nullptr;
			return k;
		}
		Node* k = this->tail;
		Node* p = k->prev;
		this->tail = p;

		
		p->next = nullptr; 
		k->prev = nullptr; 
		return k;
	}
	return nullptr;
}


int List::size()
{
	int size = 0;
	Node* k = this->head;
	while (k != nullptr) {
		size += 1;
		k = k->next;
	}
	return size;
}


int List::at(int index)
{
	Node* k = this->head;
	for (int i = 0; i < index; i++)
	{
		k = k->next;
	}
	return k->value;
}

void List::insert_at(int index, int value)
{
	int sizelst = this->size();
	if (index > sizelst)
	{
		cout << "Not vaild operation" << endl;
	}
	else {
		Node* k = this->head;
		Node* new_node = new Node(value);
		for (int i = 0; i < index - 1; i++)
		{
			k = k->next;
		}
		
		new_node->next = k->next;
		k->next->prev = new_node;

		
		k->next = new_node;
		new_node->prev = k;
	}
}

void List::remove_at(int index)
{
	if (index + 1 > this->size())
	{
		cout << "Not vaild operation: out of bounds" << endl;
	}
	else {
		Node* p = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			p = p->next;
		}
		
		if (index + 1 == this->size())
		{
			p->next->prev = nullptr;
			p->next = nullptr;
			this->tail = p;
		}
	
		else {
			p->next = p->next->next;
			p->next->prev = p;
		}
	}
}


inline void printList(List* list) 
{
	for (int i = 0; i < list->size(); i++)
	{
		cout << "list[" << i << "] == " << list->at(i) << endl;
	}
}

int main()
{
	List list1;
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);
	list1.push_back(4);
	cout << "list1" << endl;
	printList(&list1);
	cout << endl;
	List list2(list1);
	cout << "list2" << endl;
	printList(&list2);
	cout << endl;
	list1.insert_at(1, 6);
	list2.remove_at(2);
	cout << "list1" << endl;
	printList(&list1);
	cout << endl;
	cout << "list2" << endl;
	printList(&list2);
	cout << endl;
	return 0;
}