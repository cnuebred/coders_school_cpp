#include <iostream>

using namespace std;

struct listNode
{
    int value;
    struct listNode* next;
};

listNode* insert_at_head( listNode* head, int data)
{   
    return new listNode{ data, head };
}

int main() {
    //int *Head = 1;
    //insert_at_head(Head, 2);
    return 0;
}