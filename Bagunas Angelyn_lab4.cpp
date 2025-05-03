#include <iostream>
using namespace std;


string karaoke_queue[100];

int front = 0;
int rear = -1;
int max_queue = 10;

bool isFull() {
    if(rear == max_queue -1){
        return true;
    }
    

    return false;
}

bool isEmpty() {
    if(rear == -1){
        return true;
    }

    return false;
}

string enqueue(string song){
    if(isFull()){
        return "The queue is full. Try again later";
    }

    karaoke_queue[++rear] = song;
    return "A new song has been added in the queue";

}

string dequeue(){
    if(isEmpty()){
        return "There is no song in the queue. Try adding first";
    }
    string song = karaoke_queue[front];
 
    for(int i =1; i <= rear; i++){
        karaoke_queue[i-1] = karaoke_queue[i];
    }

    rear--;
    return song;

}

int main(){

    cout << enqueue ("Dancing Queen") << endl;
    cout << enqueue ("Bahay Kubo") << endl;
    cout << enqueue ("Pusong Bato") << endl; 


    cout << "Current Queue:"  << endl;
    for (int i = front; i <= rear; i++){
        cout << karaoke_queue[i] << endl;

    }

     dequeue ();
     dequeue ();

    cout << "Current Queue  after dequeuing:" << endl;
    for (int i =front; i <= rear; i++){
        cout << karaoke_queue[i] << endl;
    }

    cout << enqueue ("Shallow") << endl;
    cout << enqueue ("Breathless") << endl;
    cout << enqueue ("Faithfully") << endl;
    cout << enqueue ("You Decorated My Life") << endl;
    cout << enqueue ("Heaven") << endl;
    cout << enqueue ("If") << endl;
    cout << enqueue ("Glory of Love") << endl;
    cout << enqueue ("Stuck On You") << endl;

    cout << "Queue is now full or near full." << endl;
    cout << "Dequeuing one element: " << dequeue() << endl;

    cout << enqueue("Pusong Bato") << endl;

    cout << "Queue after dequeue and enqueue:" << endl;
    for(int i=0; i<= rear; i++){
        cout << karaoke_queue[i] << endl;
    }
     

    


    return 0;

}