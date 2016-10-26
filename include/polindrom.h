#include"conio.h"
#include <iostream>
using namespace std;
struct CNode{
	int val;
	CNode*next;
	CNode(int x = 0) : val(x), next(0){
	}
};
bool Palindrom(CNode *node);
void Add(CNode**, int);