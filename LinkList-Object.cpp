#include <iostream>

using namespace std;

class Student{
    public:
int id;
string name;



};


class Node{

public:
   // Student object;
    string name;
    int id;
    Node *next;
};


class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewNode(Student object){
        Node *temp = new Node();
        temp->id = object.id;
        temp->name = object.name;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void ShowList(){
        while(head->id != NULL){
             cout<<head->name<< " ";
                cout<<head->id<< " ";
            head = head->next;
        }
    }
};

int main()
{
Student object1;
object1.id=100;
object1.name="student 1";
Student object2;
object2.id=101;
object2.name="student 2";
   LinkedList *myList = new LinkedList();

   myList->createNewNode(object1);
   myList->createNewNode(object2);
   myList->createNewNode(object1);
  // myList->createNewNode(10);
 //  myList->createNewNode(90);
   myList->ShowList();

    return 0;
}
