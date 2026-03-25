public class parameter_constructor_with_this{
  
   int x;
   
   public parameter_constructor_with_this(int x){
     this.x=x;
   }
  
   static public void main(String[] args){
    sample obj1=new sample(67);
    sample obj2=new sample(99);
    
    
    
    
    System.out.println(obj1.x);
    System.out.println(obj2.x);
   
     }
  
}