import java.util.Scanner;


class StackOverflowException extends Exception {
  StackOverflowException(String s) {
    super(s);
  }
}


class StackUnderflowException extends Exception {
  StackUnderflowException(String s) {
    super(s);
  }
}



class Stack {
  int stack_size;
  int TOP = -1; 
  int stack[];
  Stack(int stack_size) {
    this.stack_size = stack_size;
    stack = new int[this.stack_size];
  }

  void push(int value) throws StackOverflowException{
    try {
          if (TOP == stack_size-1) {
            throw new StackOverflowException("Stack is full");
        } 
        else {
          TOP = TOP + 1;
          stack[TOP] = value;
        }
    }
    catch (StackOverflowException of) {
      System.out.println(of.getMessage());
      //of.getMessage();
      // uf.getMessage();
    }
  }

  void pop () throws StackUnderflowException{
    try {
      if (TOP == -1) {
          throw new StackUnderflowException("Stack is empty");
      } else {
        System.out.println(stack[TOP]);
        TOP = TOP - 1;
      }
    } 
    catch (StackUnderflowException uf){
      System.out.println(uf.getMessage());
    }
  } 

  void peep() throws StackUnderflowException {
    try {
      if (TOP == -1) {
        throw new StackUnderflowException("Stack is empty");
      } else {
        System.out.println(stack[TOP]);
      }
    } catch (StackUnderflowException uf) {
      System.out.println(uf.getMessage());
    }
  }

}

class Main {
  public static void main(String args[]) throws Exception{
    System.out.println("Please enter a stack size");
    Scanner takeInput = new Scanner(System.in);
    int size = takeInput.nextInt();
    Stack s1 = new Stack(size);
    while (true) {
      System.out.println("Enter the choice 1. To insert 2. pop 3. peek");
      int choice;
      choice = takeInput.nextInt();
      if (choice == 1) {
        System.out.println("Enter the value to add");
        int value;
        value = takeInput.nextInt();
        s1.push(value);
      } else if (choice == 2) {
        s1.pop();
      } else {
        s1.peep();
      }
    }
  }
}
