#include <stdio.h>
using namespace std;

//creating astructure for linked list node
struct ListNode{ 
int val; //data store
ListNode* next; //stores the address of the next node

//constructor : val = x and next = NULL
ListNode(int x) : val(x), next(NULL){}
};

class Solution {
public:
//Merging Function

// Return pointer to merge two lists

// Take two linked list heads as input
ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
    //Temporary starting node
ListNode* dummy = new ListNode(-1);
    //temp will move forward to build merge list
ListNode* temp = dummy;
    //Loop runs until one list is completed
while(list1 != NULL && list2 != NULL){
    //compare both lists
    if(list1->val <= list2->val){
        //Attach list1 node to merged list
        temp->next = list1;
        //move list1 forward
        list1 = list1->next;
    } else{
        //Attach list1 node to merged list
        temp->next = list2;
        //move list2 forward
        list2 = list2->next;
    }
    //move temp forward
    temp = temp->next;
}
//if one lsi has elements
//then attach remaining part directly
if(list1!=NULL){
    temp->next = list1;
} else {
    temp->next = list2;
}

return dummy->next;
}
};