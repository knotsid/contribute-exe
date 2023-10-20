import java.util.Arrays;
import java.util.Scanner;

public class ArrayOpration {
    //Get minimum and mximum element in the array
    public void getminmaxelement(int array[]){
        if(array.length<1)
            return;

        int min = array[0];
        int max = array[0];
        for(int num : array){
            if(num < min) 
                min = num;
            else if(num > max)
                max = num;
        }
        System.out.println("\tMinimum : "+ min + "\tMaximum : " + max);

    }

    //Get only maximum element in the array
    public static void getMax(int array[]){
        if(array.length<1)
            return;

        int max = array[0];
        for(int j = 1;j < array.length; j++)
            if(array[j] > max)
                max = array[j];

        System.out.println("\tMaximum : " + max);
    }
    
    //Get only minimum element in the array
    public static void getMin(int array[]){
        if(array.length<1)
            return;

        int min = array[0];
        for(int k = 1;k < array.length; k++)
            if(array[k] < min)
                min = array[k];

        System.out.println("\tMinimum : " + min);
    }

    //Get Sum of Element in the array; 
    public void findSum(int array[]){
        int sum = 0;
        for(int num : array)
            sum+=num;

        System.out.println("\tSum : "+ sum);
    }

    //Get Reverse of given array
    public void reverseArrayInEfficiantWay(int array[]){
        int i = 0, j = array.length - 1;

        System.out.println("\tARRAY : " + Arrays.toString(array));

        while(i<j){
            int temp = array[i];
            array[i++] = array[j];
            array[j--] = temp;
        }

        System.out.println("\tREVERSED ARRAY : " + Arrays.toString(array));
        System.out.println("\t-- Array Reversed --");

    }

    //Get second largest element in an array
    public void getsecond_largest(int array[]){
        if(array.length<2){
            System.out.println("\tInvalid Size !!");
            return;
        }

        int first_largest = array[0];
        int second_largest = array[0];
        for(int i=1; i<array.length; i++){
            if(first_largest<array[i]){
                second_largest = first_largest;
                first_largest = array[i];
            }
            else if(second_largest<array[i])
                second_largest = array[i];
        }

        System.out.println("\tSecond Largest Element : " + second_largest);
    }

    //display whole array as String
    public void display(int array[]){
        System.out.println("\tArray is: "+ Arrays.toString(array));
    }

    //Main Function
    public static void main(String args[]){
        ArrayOpration obj = new ArrayOpration();
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter how many element you want to add : ");
        int size = sc.nextInt();
        int[] array = new int[size];

        for(int i = 0;  i < array.length; i++){
            System.out.print("  Element at index " + i + " : ");
            array[i] = sc.nextInt();
        }

        System.out.println("Array : " + Arrays.toString(array));

        System.out.println("\n Your Choices,");
        System.out.println("\t1 : Print Min and Max\n\t2 : Print Max\n\t3 : Print Min");
        System.out.println("\t4 : Print Sum\n\t5 : Reverse Array\n\t6 : Second Laragest Element");
        System.out.println("\t7 : Display\n\t8 : Exit");

        int choice = 0;
        while(choice!=8){
            System.out.print("\n Enter Your Choice : ");
            choice = sc.nextInt();

            switch(choice){
                case 1:
                    obj.getminmaxelement(array);
                    break;
                case 2:
                    getMax(array);
                    break;
                case 3:
                    getMin(array);
                    break;
                case 4:
                    obj.findSum(array);
                    break;
                case 5:
                    obj.reverseArrayInEfficiantWay(array);
                    break;
                case 6:
                    obj.getsecond_largest(array);
                    break;
                case 7:
                    obj.display(array);
                    break;
                case 8:
                    System.out.println("  -- Exiting --");
                    break;
                default : System.out.println("Invalid Choice !!");
            }
        }
    }
}