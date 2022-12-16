import java.util.*;

class Student implements Comparator {
  int rollno;
  String name;
  String Address;
  
  Student(int u_roll, String u_name, String u_address) {
    this.rollno = u_roll;
    this.name = u_name;
    this.Address = u_address;
  }

  Student() {}

  public int compare(Object o1, Object o2) {
    Student s1 = (Student) o1;
    Student s2 = (Student) o2;
    return s1.name.compareTo(s2.name);
  }
}

class Main  {
  public static void main(String args[]) {
    ArrayList<Student> student = new ArrayList<Student>();
    Scanner takeInput = new Scanner(System.in);
    for (int i = 0; i < 5; i++) {

      System.out.println("Enter roll no");
      int age = takeInput.nextInt();
      System.out.println("Enter Name no");
      takeInput.nextLine();
      String name = takeInput.nextLine();
      System.out.println("Enter Address no");
      String Address = takeInput.nextLine();
      student.add(new Student(age, name, Address)); 
    }
    Collections.sort(student, new Student());
    Iterator itr = student.iterator();
    while(itr.hasNext()){  
    Student st=(Student)itr.next();  
    System.out.println(st.rollno+" "+st.name+" "+st.Address);  
    }

  }
}
