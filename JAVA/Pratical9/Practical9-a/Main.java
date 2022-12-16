import java.util.*;


class Main {
  public static void main(String args[]) {
    ArrayList<Integer> marks = new ArrayList<Integer>();
    Scanner takeInput = new Scanner(System.in);
    System.out.println("Enter student 1 marks");
    int a = takeInput.nextInt();
    marks.add(a);
    System.out.println("Enter student 2 marks");
    a = takeInput.nextInt();
    marks.add(a);
    System.out.println("Enter student 3 marks");
    a = takeInput.nextInt();
    marks.add(a);
    System.out.println("Enter student 4 marks");
    a = takeInput.nextInt();
    marks.add(a);
    System.out.println("Enter student 5 marks");
    a = takeInput.nextInt();
    marks.add(a);
    System.out.println(marks);
    System.out.println(marks.get(2));
    System.out.println("1. Display Total NUmber of students for which marks are stored \n 2. Display Mark of particular student \n 3. Display marks of all students \n 4. delete marks of a particular student");
    int choice = takeInput.nextInt();
    if (choice == 1) {
      System.out.println("Total number of students - " + marks.size());
    } else if (choice == 2) {
      System.out.println("Enter the number of student");
      int ind = takeInput.nextInt();
      System.out.println("The marks for student " + ind + "is " + marks.get(ind));
    } else if (choice == 3) {
      for (int i = 0; i < marks.size(); i++) {
        System.out.println("The marks are " + marks.get(i));
      }
    } else if (choice == 4) {
      System.out.println("Enter the number of student");
      int del = takeInput.nextInt();
      marks.remove(del);
      System.out.println(marks);
    }


  }
}
