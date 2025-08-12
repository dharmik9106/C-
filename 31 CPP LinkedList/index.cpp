#include<iostream>
using namespace  std;


class Node {

    public:
    int data;
    Node* next;


    Node(int value){
        data=value;
        next= nullptr;
    }

};
class LinkedList{
    private:
    Node* head;

    public:LinkedList(){
        head= nullptr;
    }

    void insertAtBegining(int value) {

        Node* newNode = new Node(value);

        newNode->next=head;
        head=newNode;

    }

    void displayNode(){
        Node* temp = head;

        while(temp !=nullptr){
            cout << temp->data << "->";
            temp=temp->next;
            
        }

        cout<< "NULL" << endl;
    }
     void insertAtspecificpos(int value, int pos){

        if(pos == 0){
            insertAtBegining(value);
            return;
        }

        Node* newNode = new Node(value);
        Node*  temp = head;

        for (int i=0;i<pos-1&& temp !=nullptr; i++){
            temp= temp->next;
        }

        if (temp==nullptr){
             cout << "out of range"<< endl;
            return;
        }
        newNode-> next=temp->next;
        temp-> next=newNode;
     }

     void deleteatstart(){
        if(head == nullptr){

            cout << "empty list"<< endl;
            return;
        }
        Node * temp = head;
        head= temp->next;
        delete temp;

     }
};

int  main(){

    LinkedList list;

    list.insertAtBegining(10);
    list.insertAtBegining(20);
    list.insertAtBegining(30);

    list.insertAtspecificpos(10,0);

    list.insertAtspecificpos(60,3);

      list.insertAtspecificpos(100,4);
      

      list.insertAtspecificpos(110,7);

      list.deleteatstart();
        list.deleteatstart();

    list.displayNode();

    return 0;


}