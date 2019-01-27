#include<iostream>
using namespace std;

//creating the class
class node{
public:
  //data
  int data;
  //pointer to the next node
  node*next;
  //construct that makes pointer to null
  node(int value){
  next=NULL;
  data=value;
  }
};
//circular linked list
class csll{
public:
  node*head;
  csll(){
  head=NULL;
  }
//inserting nodes to the end
void insert(int value){
  //creating new node
  node*temp=new node(value);
  
  //for empty list
  if(head==NULL){
     head=temp;}
  //if not an empty set
  else{
     node*current=head;
     while(current->next!=head){
          current=current->next;}
          current->next=temp;}
          temp->next=head;
  
}
//displaying the csll
void display(){
   node*current=head;
   //for empty csll
   if(current==NULL){
       cout<<"no elements"<<endl;
       return;}
   //if not empty
   
       while(current->next!=head){
             cout<<current->data<<"->";
             current=current->next;}
      //printing last element
      cout<<current->data;
      cout<<endl;
  
}
//inserting at aposition
void insertat(int pos,int value){
	node*current=head;
	//for inserting at first position
	if(pos==1){
		while(current->next!=head){
			current=current->next;}
			node*temp=new node(value);
			current->next=temp;
			temp->next=head;
			head=temp;}
	else{
		int i=1;
		while(i<pos-1){
			i++;
			current=current->next;
		}
		//creating node
		node*temp=new node(value);
		temp->next=current->next;
		current->next=temp;
	}
}
void countelem(){
	
node*current=head;
int i=0;
while(current->next!=head){
    i++;
    current=current->next;}
    cout<<"no of elements :"<<(i+1)<<endl;
}
			
//deleting last element
void del(){
       node*current=head;
        while(current->next->next!=head)
	{
	current=current->next;
	}
	node*temp=current->next;
	current->next=head;
	delete temp;
}
       
//deleting at a position
void deletat(int pos){
	node*temp=head;
	//for first position
	if(pos==1){
		node*current=head;
		while(current->next!=head){
			current=current->next;}
			current->next=temp->next;
			head=temp->next;
		}
    //for other positions
        else{
             node*current=head;
             int i=1;
             while(i<pos-1){
             i++;
             current=current->next;}
             node*temp=current->next;
             current->next=temp->next;
             }
}
             
             
			
};
//main function
int main(){
   csll l1;
   l1.insert(1);
   l1.insert(2);
   l1.insert(3);
   l1.insert(4);
   l1.insert(5);
   l1.insert(6);
   l1.insert(7);
   l1.display();
   l1.insertat(5,10);
   l1.display();
   l1.deletat(4);
   l1.display();
   l1.del();
   l1.display();
   l1.countelem();
}
                                   
            
      







   

     











