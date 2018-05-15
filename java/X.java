
class X{  
	public int i;  
	X()
	{
		 System.out.println("I'm in class X");

	}
	}  
	class Y extends X{  
	public int j;
	Y()
	{
		System.out.println("this will not be printed");
	}
	 Y(int x,int y )
	 {
		i=x;
		j=y;
	 }
	 int Area()
	 {
		 return i*j;
	 }
	
	}
	class Rectangle extends Y{
		
	 public static void main(String args[]){  
	   Y obj=new Y(10,12);  
	   
	   obj.Area();
	   System.out.println("Area of rectangle is : "+obj.Area());
	 }
	}