import java.util.Scanner;
public class string_pallindrom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter the string: ");
        String str = sc.nextInt();

        int i = 0, j = str.length()-1;
        boolean var = false;
        while(i<=j){
            if(str.charAt(i)!=str.charAt(j)){
                var = true;
                break;
            }
            i++;
            j--;
        }
        if(var){
            System.out.println("String is not palindrom!");
        }else{
            System.out.println("String is not palindrom!");
        }
    }
}
