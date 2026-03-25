public class method_setter_getter{
  
   private String name;
   
   //getter
   public String getName(){
         return name;
   }
   //setter
   public void setName(String newName){
     name=newName;
   }
   
   
   
   static public void main(String[] args){
    method_setter_getter obj1=new method_setter_getter();
    method_setter_getter obj2=new method_setter_getter();
    
    
    obj1.setName("lalit");
    System.out.println(obj1.getName());
    
   
     }
  
}