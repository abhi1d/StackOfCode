
//Objects may be passed to methods.
class Bank {
int id, money,d;
String name;
Bank(String s,int i, int j) {
name=s;
id = i;
money = j;
}
int TransferTo(Bank o) {
 int x=5000;
 money=money-x;
 o.money=o.money+x;
 System.out.println("gates :"+money+"\n"+"Zuckerberg : "+o.money);
 return 0;
}

}
class PassOb {
public static void main(String args[]) {
Bank ob1 = new Bank("Gates",101,10000 );
Bank ob2 = new Bank("Zuckerberg",102,20000);

ob1.TransferTo(ob2);

}
}