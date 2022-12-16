import java.util.Scanner;
class Main {
  public static void main(String []args) {
   Scanner takeInput = new Scanner(System.in);
    while (true) {
      System.out.println("Please enter a string");
      takeInput.nextLine();
      String main_string = takeInput.nextLine();
      System.out.println("Enter a choice 1. Count the number of occuring character 2. Reverse 3. Concat 4. Whether the string is pallindrome or not");
      int choice;
      choice = takeInput.nextInt();
      if (choice == 1) {
          System.out.println("Please enter a value to count the occurence");
          char match = takeInput.next().charAt(0);
          int count = 0;
          for (int i = 0; i < main_string.length(); i++) {
            if (main_string.charAt(i) == match) {
              count++;
          }
        }
          System.out.println("THe number of occurence for letter " +match+ " is " + count);
      } else if (choice == 2) {
        System.out.println("----------- STARTED REVERSING ------------------");
        /*
        char rev_str[] = {'a','b','c','d'};
        String rev_str_pr;
        System.out.println(rev_str.concat(""));
        */
        String rev_str = "";
        String st;
        for (int i = main_string.length()-1; i >= 0 ; i-- ) {
          System.out.println(main_string.charAt(i));
           rev_str=rev_str+ main_string.charAt(i);
        }
        System.out.println(rev_str);
      } else if (choice == 4) {
        String rev_str = "";
        for (int i = main_string.length()-1; i >= 0 ; i-- ) {
          System.out.println(main_string.charAt(i));
           rev_str=rev_str+ main_string.charAt(i);
        }
        System.out.println(rev_str);
        if (rev_str.equals(main_string)) {
          System.out.println("String is pallindrome");
        }
        else {
          System.out.println("String is not pallindrome");
        }
      } else if (choice == 3) {
        System.out.println("Please enter another string");
        takeInput.nextLine();
        String other_string = takeInput.nextLine();
        String temp_string = main_string.concat(other_string);
        System.out.println(temp_string);
      }
    }
  }
}
