/*******
Following is the main
function we are using internally.
Refer this
for completing the Dequeue class.

int main() {
    Deque dq(10);
    int choice, input;
    while (true) {
      cin >> choice;
      switch (choice) {
      case 1:
        cin >> input;
        dq.insertfroYou need to implement a class
        for Dequeue i.e.for double ended queue.In this queue, elements can be inserted and deleted from both the ends.
        You don 't need to double the capacity.
        You need to implement the following functions -
          nt(input);
        break;
      case 2:
        cin >> input;
        dq.insertrear(input);
        break;
      case 3:
        dq.deletefront();
        break;
      case 4:
        dq.deleterear();
        break;
      case 5:
        cout << dq.getFront() << "\n";
        break;
      case 6:
        cout << dq.getRear() << "\n";
        break;
      default:
        return 0;
      }
    }

    return 0;
  }

  **
  ** ** * /

class Deque {
  // Complete this class
  public:
    int a[10];
  int size;
  int rear;
  int front;

  Deque(int size) {
    this - > size = size;
    //int a = new int[size];
    rear = 0;
    front = -1;

  }

  bool isFull() {
    return ((front == 0 && rear == size - 1) || front == rear + 1);
  }

  bool isEmpty() {
    return (front == -1);
  }
  void insertFront(int key) {
    if (isFull()) {
      cout << "-1" << endl;
      return;
    }

    if (front == -1) {
      front = 0;
      rear = 0;
    } else if (front == 0) // front is first position of queue 
      front = size - 1;
    else // decrement front 1 position 
      front = front - 1;

    a[front] = key; // insert current element into Deque
  }

  void insertRear(int key) {
    if (isFull()) {
      cout << "-1" << endl;
      return;
    }

    //  If queue is initially empty,set front=rear=0; start of deque 
    if (front == -1) {
      front = 0;
      rear = 0;
    } else if (rear == size - 1) // rear is at last position of queue
      rear = 0;
    else // increment rear by 1 position 
      rear = rear + 1;

    a[rear] = key; // insert current element into Deque
  }
  void deleteFront() {
    if (isEmpty()) {
      cout << "-1" << endl;
      return;
    }

    // Deque has only one element 
    if (front == rear) {
      front = -1;
      rear = -1;
    } else
      // back to initial position 
      if (front == size - 1)
        front = 0;

      else // remove current front value from Deque;increment front by 1
        front = front + 1;
  }

  void deleteRear() {
    if (isEmpty()) {
      cout << "-1" << endl;
      return;
    }

    // Deque has only one element 
    if (front == rear) {
      front = -1;
      rear = -1;
    } else if (rear == 0)
      rear = size - 1;
    else
      rear = rear - 1;
  }
  int getFront() {
    if (isEmpty()) {

      return -1;
    }
    return a[front];
  }

  // retrieve rear element of Deque 
  int getRear() {
    if (isEmpty() || rear < 0) {

      return -1;
    }
    return a[rear];
  }

};
