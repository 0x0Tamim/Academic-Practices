public class CopyConstructor {
    private int a;
    private String b;
    CopyConstructor(int a , String b){
        this.a = a;
        this.b = b;
    }
    CopyConstructor( CopyConstructor c){
        a = c.a;
        b = c.b;
    }
    public void display(){
        System.out.println(a+" "+b);
    }
}

class c{
    public static void main(String[] args){
        CopyConstructor c1 = new CopyConstructor(100,"Tamimmmm");
        c1.display();
        CopyConstructor c2 = new CopyConstructor(c1);
        c2.display();
    }
}
