import java.util.Scanner;

class Swap_numbers{
  public static void main(String[] args){
    
  Scanner input=new Scanner(System.in);
  System.out.println("Enter value of first digit:");
  int first=input.nextInt();
  System.out.println("Enter value of second digit:");
  int second=input.nextInt();
  first=first+second;
  second=first-second;
  first=first-second;
  System.out.print("second:"+second+"first:"+first);
  
    
  }
}