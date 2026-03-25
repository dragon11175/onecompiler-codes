public class constructor_defult_value{
  
   int modelYear;
   String modelName;
   
   //constructor with one parameter
   public constructor_defult_value(String modelName){
     //call the two parameter constructor to reuse code and set a default
      this(2020,modelName);
   }
   
   public constructor_defult_value(int modelYear,String modelName){
     
     //use this to assign values to the class variables
     this.modelYear=modelYear;
     this.modelName=modelName;
   }
   
   //metgod to print information
   
   public void printinfo(){
     System.out.println(modelYear+""+modelName);
   }
  
   static public void main(String[] args){
    constructor_defult_value obj1=new constructor_defult_value(565,"lalit");
    constructor_defult_value obj2=new constructor_defult_value("ankit");
    
    
    obj1.printinfo();
    
   
     }
  
}