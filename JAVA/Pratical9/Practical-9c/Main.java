import java.util.*;

class Node {
  int a;
  Node next;

  Node (int val) {
    this.a = val;
  }
}


class Main {
  public static void main (String args[]) {
    Scanner takeInput = new Scanner(System.in);
    Node n1 = new Node(10);
    n1.next = null;
    Node GOD = n1;
    Node copy = GOD;
    System.out.println("GOD HAS BEEN INTIALIZED ");
    System.out.println("HOW MANY INTEGER YOU WISH TO ADD ?");
    int choice = takeInput.nextInt();
    for (int i = 0; i < choice; i++) {
      System.out.println("Enter element "); 
      int ele = takeInput.nextInt();
      copy.next = new Node(ele);
      copy = copy.next;
      copy.next = null;
    }

    System.out.println("Enter object in beginning kid");

    int ele = takeInput.nextInt();
    Node new_node = new Node(ele);
    new_node.next = GOD;
    GOD = new_node;

    System.out.println("Inserting elementing at end child");

    Node ptr = GOD;
    while(ptr.next != null) {
      ptr = ptr.next;
    }

    ele = takeInput.nextInt();
    Node new_node2 = new Node(ele);
    ptr.next = new_node2;
    new_node2.next = null;

    System.out.println("I will enter where you wish");
    int search = takeInput.nextInt();
    ptr = GOD;
    while(ptr.a != search) {
      ptr = ptr.next;
    }

    System.out.println("ENTER THE VALUE YOU WISH TO INSERT ");
    ele = takeInput.nextInt();
    Node new_node3 = new Node(ele);
    new_node3.next = ptr.next;
    ptr.next = new_node3;

    System.out.println("DISPLAYING YOUR CONSEQUENCES");
    ptr = GOD;
    while (ptr != null) {
      System.out.println(" THE VALUES ARE " + ptr.a);
      ptr = ptr.next;
    }

  }
}
