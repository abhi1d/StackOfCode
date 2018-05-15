interface Box1
 
{
	  public static final int l1=10;
      public static final int b1=20;
      public static final int h1=30;
                void show();
 
}
 
 
interface Box2
 
{
	 public static final int l2=5;
     public static final int b2=30;
     public static final int h2=25;
                void show();
 
}
 
 
class MyClass implements Box1, Box2
{
  void Myclass()
  {
	  System.out.println("this will not be display");
	  
  }
                public void show()
 
                {
                         
                                System.out.println("the volumn of box 1 is :"+(l1*b1*h1));
                                System.out.println("the volumn of box 2 is :"+(l2*b2*h2));
 
                }
 
 
                public static void main(String...s)
 
                {
 
                                MyClass obj=new MyClass();
 
                                obj.show();
                            		
                }
 
}