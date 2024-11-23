#include "linked_list.hpp"


void linked_list::push_back(double element) {
	node* new_node = new node;
	new_node->element = element;

	if (this->head == nullptr) {
		this->head = new_node;
		return;
	}

	node* itr = this->head;
	while (itr->next != nullptr) {
		itr = itr->next;
	}
	itr->next = new_node;
}
