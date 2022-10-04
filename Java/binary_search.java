import java.util.Scanner;

public class binary_search {

    int binerysearch(int array[], int target , int start,int end){

        int middel = start/end;

        for(int k = 0; k < array.length; k++){
             
            if(array[middel] == target){

                return k;

            }
            else if(array[middel] < target ){

                middel = middel + 1;

            }

            else if(array[middel] > target){
                
                middel = middel - 1;

            }


        }

        return -1;


    }
    
    public static void main(String args[]){

        binary_search obj = new binary_search();
        Scanner sc = new Scanner(System.in);
        

        System.out.println("Enter how many element ypu want to add:");
        int element = sc.nextInt();

        int array[] = new int[element];


        for(int i = 0;i < array.length; i++){

            System.out.println("Enter " + i +" Element: ");

            array[i] = sc.nextInt();

        }

        System.out.println("Your array");

        for(int j = 0; j < array.length; j++){

            System.out.print(array[j]+" ");

        }

        System.out.println();

        System.out.println("Enter Target ? :");
        int target = sc.nextInt();


        int result = obj.binerysearch(array, target, 0, array.length);

        if(result == -1){
        
            System.out.println("Sorry Element is Not Found");

        }
        else{

            System.out.println("Element is Found At The Index :"+ (result + 1));
        }
        

     sc.close();

    }
}
