import java.util.Scanner;

class Adding_Two_digit{
  public static void main(String[] args){
    
  Scanner input=new Scanner(System.in);
  System.out.print("Please enter first digit: ");
  int a=input.nextInt();
  System.out.print("please enter second digit:");
  int b=input.nextInt();
  int c=a+b;
  System.out.print("your Addition:"+c);
  
  input.close();
   
  
    
  }
}