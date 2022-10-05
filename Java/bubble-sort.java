public class boble_Sort {

    public static void bobleSort(int array[]){

        //int swap = 0;

        for(int i = 0 ; i < array.length - 1; i++){

            for(int j = 0 ; j < array.length - i - 1; j++){

                if(array[i] > array[i + 1] ){

                   int swap = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = swap;
                }

            }

            
        }


    }

    public static void main(String args[]){

        int array[] = {3,2,7,5,8};
       
        System.out.println("Your array");

        for(int j = 0; j < array.length; j++){

            System.out.print(array[j]+" ");

        }

        System.out.println();
        
        bobleSort(array);


        for(int i = 0; i < array.length; i++){

            System.out.print(array[i]+" ");

        }

        


        
    }
    
}
