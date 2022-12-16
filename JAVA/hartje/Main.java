import java.util.Scanner;
class Main {
  public static void main (String []args) {
    Scanner takeInput = new Scanner(System.in);
    int count = 0;
    StringBuffer str = new StringBuffer();
    StringBuffer old = new StringBuffer();
    StringBuffer new_str = new StringBuffer();
    System.out.println("Enter main string ");
    str.append(takeInput.nextLine());
    System.out.println("Enter old string ");
    old.append(takeInput.nextLine());
    String str_old = old.toString();
    System.out.println("Enter new string ");
    new_str.append(takeInput.nextLine());
    int str_old_index = str.indexOf(str_old);
    count = str_old_index + str_old.length();
    String new_str_str = new_str.toString();
    StringBuffer temp = new StringBuffer(str.replace(str_old_index, count, new_str_str)); 
    System.out.println(temp);
  }
}
