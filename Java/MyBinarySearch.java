import java.util.Scanner;
public class MyBinarySearch {
     int MyBinarySearchfuntion(int array[],int target,int start,int last){
        while(start<=last){
            int middel = (start + last)/2;
            if(array[middel]==target){
                return middel + 1;
            }
            else if(array[middel] < target){
                start = middel + 1;
            }
            else if(array[middel] > target){
                last = middel - 1;
            }
            
            
        }
         return -1;
    }
      
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        MyBinarySearch obj = new MyBinarySearch();
        System.out.println("Enter Size of Array: ");
        int size = sc.nextInt(); 
        int[] array = new int[size];
   
        for(int i = 0;i<size;i++){
            array[i] = sc.nextInt();
        }
        
        System.out.println("Your array: ");
   
        for(int i = 0;i<array.length;i++){
           System.out.print(array[i]+" ");
           
       }  

       System.out.println("Enter Your target: ");

      int target = sc.nextInt();
      int start = 0;
      int last = array.length-1;
       sc.close();

       
      int result1 =  obj.MyBinarySearchfuntion(array,target,start,last);
      
       if (result1 == -1){
        System.out.println("Not found");
       }
      else{
        System.out.println("Element found at index " + result1);
    }

    }
    
    
}
