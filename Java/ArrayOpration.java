import java.util.Arrays;
import java.util.Scanner;

public class ArrayOpration {

    //Get minimum and mximum element in the array
    public void getminmaxelement(int array[]){

        Arrays.sort(array);
        int min = array[0];
        int max = array[-2];
        System.out.println("Minimum is: "+ min + " Maximum is: " + max);

    }

     public void GetMaxMin(int myarray[]){
        int Maxelement = myarray[0];
        int Minelement = myarray[0];
        for(int i = 0;i<myarray.length;i++){

            if(myarray[i] < Minelement){
                Minelement = myarray[i];
                
            }
            else if(myarray[i] > Maxelement){

                Maxelement = myarray[i];
                


            }
        }
        System.out.println("Minimum is: "+ Minelement + " Maximum is: " + Maxelement);
        //return -1;

    }

    //Get only maximum element in the array
    public static void GetMax(int array[]){

        int max = 0;
        for(int j = 0;j < array.length; j++){
            if(array[j] > max){

                max = array[j];
            }
        
    
        }
        System.out.println("MAximum Element in the array is: "+max);
    }

    
    //Get only minimum element in the array
    public static void GetMin(int array[]){

        int min = array[0];
        for(int k = 0;k < array.length; k++){
            if(array[k] < min){

                min = array[k];
            }
        
    
        }
        System.out.println("Minimum Element in the array is: "+min);
    }
    //Get Sum of Element in the array; 
    public void FindSum(int Myarray[]){
        int sum = 0;
        for(int i = 0;i < Myarray.length; i++){
            sum = sum + Myarray[i];
        }
        System.out.println("Array Element Sum is: "+ sum);
    }

    public void Reverse(int Myarray[]){
        
        for(int i = Myarray.length-1 ; i >= 0 ; i-- ){

            System.out.print(Myarray[i]);
        }
        
        System.out.println("Reverse Array is: "+ Arrays.toString(Myarray));

    }

    public void ReversarrayinifficiantWay(int array[]){

        int i = 0;
        int j = array.length - 1;

        System.out.println(Arrays.toString(array));

        System.out.println("YOUR REVERSE ARRAY IS: ");
        while(i<j){

            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;

            i++;
            j--;
        }
        System.out.println(Arrays.toString(array));

    }

    //Gt second largest element in an array

    public int getsecond_largest(int array[]){

        Arrays.sort(array);
        return array[array.length -2];
    }


    //display whole array
    public void display(int array[]){
        System.out.println(" Array is: "+ Arrays.toString(array));

    }

    public static void main(String args[]){
        ArrayOpration obj = new ArrayOpration();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter how many element you want to add:");
    int number = sc.nextInt();
    int array[] = new int[number];


    for(int i = 0;  i < array.length; i++){

        System.out.println("Enter "+ i + " Element: ");

        array[i] = sc.nextInt();

    }


        System.out.println(Arrays.toString(array));
        sc.close();

       //GetMax(array);
       //GetMin(array);
       //call getminmax
      // obj.GetMaxMin(array);
       //call sum
      // obj.FindSum(array);
       //call reverse
      // obj.Reverse(array);
     // obj.ReversarrayinifficiantWay(array);
    // System.out.println(obj.getsecond_largest(array));
     //obj.display(array);
     obj.getminmaxelement(array);
    
}

}