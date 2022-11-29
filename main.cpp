#include <iostream>
using namespace std;

class Vehicle {
public:
      string vType;
      string vNumber;



};

class StoreInfo{
public:
      string date;
      int toll_money;
      int ticket_number;

     gettoll(string vType){
          if(vType=="Heavy-duty")
        return 800;
      if(vType=="Medium-duty")
        return 800;
      if(vType=="Light-duty")
        return 800;

      }
};



class Queue {
int MAX_SIZE=10;
public:
StoreInfo myqueue[MAX_SIZE];
int front = -1,rear = -1;


boolisFull(){
if(front == 0 && rear == MAX_SIZE - 1){
return true;
        }
return false;
    }

boolisEmpty(){
if(front == -1) return true;
else return false;
    }

void enQueue(int value){
if(boolisFull()){
cout << endl<< "Queue is full!!";
        } else {
if(front == -1) front = 0;
rear++;
myqueue[rear] = value;
cout << value << " ";
        }
    }
int deQueue(){
int value;
if(boolisEmpty()){
cout << "Queue is empty!!" << endl; return(-1); } else { value = myqueue[front]; if(front >= rear){      //only one element in queue
front = -1;
rear = -1;
            }
else {
front++;
            }
cout << endl << "Deleted => " << value << " from myqueue";
return(value);
        }
    }

    /* Function to display elements of Queue */
void displayQueue()
    {
int i;
if(isEmpty()) {
cout << endl << "Queue is Empty!!" << endl;
        }
else {
cout << endl << "Front = " << front;
cout << endl << "Queue elements : ";
for(i=front; i<=rear; i++)
cout << myqueue[i] << "\t";
cout << endl << "Rear = " << rear << endl;
        }
    }
};
