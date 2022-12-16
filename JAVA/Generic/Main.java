import java.util.Scanner;

class Generic {
  <T> void genericTest(T element) {
    System.out.println(element);
  }
}

class Main {
  public static void main(String args[]) {
    Generic g1 = new Generic();
    g1.genericTest(77);
    g1.genericTest("Hello");
    g1.genericTest(8.5);

  }
}
