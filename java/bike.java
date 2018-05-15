
 abstract class bike {
 abstract void run();//this will not be called
 
}
 class Honda extends bike
 {
	 void run()
	 {
		 System.out.println("I'm in Honda class");
		 
	 }
	 public static void main(String args[])
	 {
		 Honda obj=new Honda();
		 obj.run();
	 }
 }
