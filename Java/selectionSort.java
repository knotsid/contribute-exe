import java.util.Scanner;

public class selectionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the total no=");
        int size = sc.nextInt();
        int arr[] = new int [size];
        for (int i = 0; i < arr.length; i++) {
            arr [i] = sc.nextInt();   
       }
       // int arr[] ={ 7,6,1,8,2};
        for (int i = 0; i < arr.length; i++) {
            int small = i;
            for (int j = i+1; j < arr.length; j++) {
                if (arr[small]>arr[j]) {   
                    small=j;
                } 
            }
             //swap
             int temp = arr[small];
             arr[small]= arr[i];
             arr[i] =temp;
        }
       
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
    }
    
}
