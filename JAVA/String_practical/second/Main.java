import java.util.Scanner;
class Main {
  public static void main(String[] args) {
  Scanner takeInput = new Scanner(System.in);
          int choice;
  while (true) {
     System.out.println("Give string input");
     StringBuffer main_str = new StringBuffer();
     takeInput.nextLine();
     main_str.append(takeInput.nextLine());
     System.out.println(main_str);
     System.out.println("Enter choice: 1. Compare, 2. Pallindrome or not, 3. Number of occurences of a character in String, 4. replace substring with a string, 5. append new string at the last, 6. insert string at the user given position, 7. To delete substring, 8. to sort 4 string");
     
     
     choice = takeInput.nextInt();
     if (choice == 1)
     {
         System.out.println("Enter another string");
         takeInput.nextLine();
         StringBuffer another_string = new StringBuffer();
         another_string.append(takeInput.nextLine());
         if (main_str.toString().equals(another_string.toString())) {
             System.out.println("String is same");
         } else {
             System.out.println("string is not same");
         }
     } else if (choice == 2) {
         System.out.println(" This is main " + " " + main_str);
         StringBuffer rev_str = main_str.reverse();
         if(rev_str.equals(main_str)) {
             System.out.println("The string is Pallindrome");
         }
     } else if (choice == 3) {
         System.out.println("Give input to count the occurence in the string");
         int count = 0;
         StringBuffer temp_str = new StringBuffer();
          takeInput.nextLine();
         temp_str.append(takeInput.nextLine());
        String[] str_array = main_str.toString().split(" ");
        for (int i = 0; i < str_array.length; i++) {
          if (str_array[i].equals(temp_str.toString())){
            count = count + 1;
          }
        }
        System.out.println("The word " + temp_str + "is repeated " + count + " times");
     } else if (choice == 4 ) {
         StringBuffer substr = new StringBuffer();
         System.out.println("Enter the substring to replace");
         takeInput.nextLine();
         substr.append(takeInput.nextLine());
         System.out.println("Enter the substring to replace wth");
         StringBuffer replace_str = new StringBuffer();
         replace_str.append(takeInput.nextLine());
         int position = main_str.indexOf(substr.toString()); 
         int length = substr.length();
         StringBuffer temp_str = main_str;
         temp_str.replace(position, length = length + position, replace_str.toString());
          System.out.println(temp_str);
         
         
     } else if (choice == 5) {
        StringBuffer append_str = main_str;
        System.out.println("Enter a string to append ");
        takeInput.nextLine();
        append_str.append(takeInput.nextLine());
        System.out.println("After appending the string is " + append_str); 
      } else if (choice == 6) {
        System.out.println("The string is " + main_str);
        System.out.println("Please enter the position after which you wish to add a string ");
        int position = takeInput.nextInt();
        System.out.println("Enter the substing which you wish to insert");
        String str =new String();
        takeInput.nextLine();
        str = takeInput.nextLine();
        StringBuffer temp = main_str;
        temp.insert(position, str);
        System.out.println("String after insert is " + temp);
      } else if (choice == 7) {
        System.out.println("This is the main string " + main_str);
        System.out.println(" Please enter the substring you wish to remove ");
        takeInput.nextLine();
        String str = takeInput.nextLine();
        int index = main_str.indexOf(str);
        int lenght = str.length();
        StringBuffer temp = main_str;
        temp.delete(index, lenght = lenght + index);
        System.out.println("The string after deletion is " + temp);
      } else if (choice == 8 ) {
        System.out.println("We need 4 strings feel free to enter them");
        StringBuffer str1 = new StringBuffer();
        takeInput.nextLine();
        str1.append(takeInput.nextLine());
        System.out.println(str1);
        StringBuffer str2 = new StringBuffer();
        str2.append(takeInput.nextLine());
        System.out.println(str2);
        StringBuffer str3 = new StringBuffer();
        str3.append(takeInput.nextLine());
        System.out.println(str3);
        StringBuffer str4 = new StringBuffer();
        str4.append(takeInput.nextLine());
        System.out.println(str4);
        
      }
   }
  }
 }
  
