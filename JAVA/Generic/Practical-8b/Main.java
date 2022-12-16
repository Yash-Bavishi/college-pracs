import java.util.Scanner;
import java.util.*;

class CustomException extends Exception {
  CustomException(String s) {

  }
}

class Test {
  <T> void execute(T obj1, T obj2, int choice) {
    if (choice == 1) {
      if(obj1.getClass() == String.class && obj1.getClass() == String.class) {
        String new_str  = (String) obj1 + (String) obj2;
        System.out.println(new_str);
      } else if (obj1.getClass() == Integer.class && obj1.getClass() == Integer.class) {
        System.out.println((Integer) obj1 + (Integer) obj2);
      } else if (obj1.getClass() == Float.class && obj1.getClass() == Float.class) {
        System.out.println((Float) obj1 + (Float) obj2);
      } else if (obj1.getClass() == Double.class && obj1.getClass() == Double.class) {
        System.out.println((Double) obj1 + (Double) obj2);
      } else {
        System.out.println("Some other datatype");
      }
    } else if (choice == 2) {
      if(obj1.getClass() == String.class && obj1.getClass() == String.class) {
        Scanner takeInput = new Scanner(System.in);
        System.out.println("Please enter beginning of index of substring");
        int indexStart = takeInput.nextInt();
        System.out.println("Please enter end of index of substring");
        int indexEnd = takeInput.nextInt();
        String old_str = (String) obj1;
        System.out.print(old_str);
        System.out.println(old_str.length());
        String new_str = old_str.substring(indexStart, indexEnd);
        System.out.println(new_str);
      } else if (obj1.getClass() == Integer.class && obj1.getClass() == Integer.class) {
        System.out.println((Integer) obj1 - (Integer) obj2);
      } else if (obj1.getClass() == Float.class && obj1.getClass() == Float.class) {
        System.out.println((Float) obj1 - (Float) obj2);
      } else if (obj1.getClass() == Double.class && obj1.getClass() == Double.class) {
        System.out.println((Double) obj1 - (Double) obj2);
      } else {
        System.out.println("Some other datatype");
      }
    }
  }
}


class Main {
  public static void main(String args[]) {
    Scanner takeInput = new Scanner(System.in);
    Test main_object = new Test();
    try {
      System.out.println("Please enter a choice 1. ADd 2. Subtract");
      int choice = takeInput.nextInt();
      System.out.println("PLease enter 2 integer");
      Integer i1 = new Integer(takeInput.nextInt());
      Integer i2 = new Integer(takeInput.nextInt()); 
      System.out.println("Please enter 2 Float");
      Float f1 = new Float(takeInput.nextFloat());
      Float f2 = new Float(takeInput.nextFloat());
      System.out.println("Please enter 2 String");
      takeInput.nextLine();
      String s1 = new String(takeInput.nextLine());
      String s2 = new String(takeInput.nextLine());
      takeInput.nextLine();
      System.out.println("Please enter 2 Double");
      Double d1 = new Double(takeInput.nextDouble());
      Double d2 = new Double(takeInput.nextDouble());
      main_object.execute(i1, i2, choice);
      main_object.execute(f1, f2, choice);
      main_object.execute(d1, d2, choice);
      main_object.execute(s1, s2, choice);
    } catch (InputMismatchException e) {
      System.out.println("Wrong input");
    }
  }
}
