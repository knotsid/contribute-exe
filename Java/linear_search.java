
import java.util.Arrays;
import java.util.Scanner;
public class lenear_search {

    public static int Search_Element(int array[],int target){

        for(int i = 0; i < array.length; i++){

            if(array[i] == target){

                return i;
            }




        }
        return -1;

        

    }
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter hoe many element you want: ");
        int number = sc.nextInt();
        int array[] = new int[number];

        for(int i = 0 ; i<array.length; i++){

            System.out.println("Enter "+ i + " Element: ");

            array[i] = sc.nextInt();

        }
        System.out.println("your array: ");

        System.out.println(Arrays.toString(array));

        System.out.println("Enter target element you want to search: ");

        int target = sc.nextInt(); 

       int result =  Search_Element(array,target);

        if(result == -1){

            System.out.println("Sorry Your Eleent is not Found: "); 



        }
        else{

            System.out.println("Your Element is Found At the index: "+ (result + 1));

        }

        sc.close();

    }
    
}
