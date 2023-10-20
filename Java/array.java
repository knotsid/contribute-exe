import java.net.SocketImpl;

public class array {
    public static void main(String[] args) {
        int array[] = { 3, 4, 5, 6, 7, 8, 9 };
        int n = array.length;
        System.out.println("Size : " + n);
        for(int num : array)
            System.out.print(num + "  ");
    }
}
