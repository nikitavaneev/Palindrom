#include"polindrom.h"

void Add(CNode **node, int data) {
	CNode* temp = new CNode;
	temp->val = data;
	temp->next = *node;
	*node = temp;
}
bool Palindrom(CNode *head) {
	int size = 0;
	CNode *node = head;

	while (node != 0) {
		size++;
		node = node->next;
	}
	int offset = size - 1;
	node = head;
	for (int i = 0; i < size / 2; ++i) {
		node = head;
		for (int j = 0; j < offset; ++j)
		{
			node = node->next;
		}
		if (node->val != head->val)
		{
			return false;
		}
		head = head->next;
		offset -= 2;
	}
	return true;
}