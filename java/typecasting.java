import java.util.Scanner;
public class typecasting {

	public static void main(String args[])
	{  
		System.out.println("float to integer -> ");
		float f; 
		f=10.077f;
		int i=(int)f;
		System.out.println(i);
		System.out.println("integer to float");
		
		int z=50;
		float x=(float)z;
		System.out.println(x);
		System.out.println("\n");	
	 Scanner sc= new Scanner(System.in);
	 System.out.println("enter int type of number and you will get only byte type");
     int a = sc.nextInt();
     System.out.println((byte)a);
	 
	}
}