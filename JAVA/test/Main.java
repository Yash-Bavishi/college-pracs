import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    System.out.println("Please enter a string");
    StringBuffer cmp = new StringBuffer("asd");
    System.out.println(cmp);
    StringBuffer temp = new StringBuffer();
    temp.append('a');
    temp.append('s');
    temp.append('d');
    System.out.println(temp);
    StringBuffer temp2 = new StringBuffer("asd");
    if (cmp.toString().equals(temp2.toString())) {
      System.out.println("ASDSADASDAS");
    }
    if (cmp.equals(temp)) {
      System.out.println("Something is wrong wth the loop");
    } else {
      System.out.println("Time to call mam");
    }
    StringBuffer store = new StringBuffer();
    StringBuffer str = new StringBuffer();
    int count = 0;
    Scanner takeInput = new Scanner(System.in);
    str.append(takeInput.nextLine());
    System.out.println(str);
    for (int i = 0; i < str.length(); i++) {
      store.delete(0, store.length());
      for (int j = i; j < str.length(); j++) {
        if (cmp.equals(store)) {
          System.out.println("Hello I am called ");
          count = count + 1;
        } else {
          System.out.println(str.charAt(j));
          System.out.println(store);
          store.append(str.charAt(j));
        }
      }
    }
    System.out.println(count);
  }
}
