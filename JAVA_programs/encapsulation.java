public class encapsulation{
  
   private String name;
   private String address;
   
   
   //getter
   public void show(){
         System.out.println("name:"+name+" address:"+address);
   }
   //setter
   public void setName(String newName){
     name=newName;
   }
   
   public void setaddress(String a){
     address=a;
   }
   
   
   
   static public void main(String[] args){
    encapsulation obj1=new encapsulation();
    
    
    
    obj1.setName("lalit");
    obj1.setaddress("punhana");
    obj1.show();
    
    
   
     }
  
}