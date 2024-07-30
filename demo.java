import java.util.Scanner;

class demo{
    public static void main(String args[]){
        int s = 11;
        int c  = ++s + s++;
        int d = s + ++c + c++ + s++;
        int f = d++ + d++ - s++ - ++d;
        System.out.println(s +" ,"+ c +" ," + d +" ,"+ f );
    }
}