import java.util.Scanner;

public class ProductOfFloatNumbers{
  
  public static void main( String arg[]){
    Scanner input= new Scanner(System.in);
    System.out.print("Enter the 1st value :");
    float a=input.nextFloat();
    System.out.print("Enter the 2nd value :");
    float b=input.nextFloat();
    float c=a*b;
    System.out.print("your prodduct is :" + c);
    
    
  }
  
  
  
  
}