//final and static keywords
public class Employee {
int id;
String name;
static String Company_name="Facebook";
static final String salary="2 billion";
public static void main(String args[])
{
	Employee obj1=new Employee();
	Employee obj2=new Employee();
	obj1.id=101;
	obj1.name="MarkZuckerberg";
	System.out.println("Employee ID : "+obj1.id+"\tEmployee Name : "+obj1.name);
	System.out.println("Company Name  :"+Company_name);
	System.out.println("Salary : "+salary);
	obj2.id=102;
	obj2.name=" Dustin Moskovitz";
	System.out.println("Employee ID : "+obj2.id+"\tEmployee Name : "+obj2.name);
	System.out.println("Company Name  :"+Company_name);
	System.out.println("Salary : "+salary);
	
}
}
