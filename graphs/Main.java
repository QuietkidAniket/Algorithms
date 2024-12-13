import java.util.*;

class Math{ public final int secret = 2; }
class ComplexMath extends Math{ public final int secret = 4; }
public class Main{
    public final int secret = 8;
    public static void main(String args[]){ 
        int n = 50;
        {
            int m = 40;
        }
        // System.out.println(m);
        Math obj = new ComplexMath(); 
        // System.out.println(obj.secret);
    }
}