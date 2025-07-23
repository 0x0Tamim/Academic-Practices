
public class Main {
    public static void main(String[] args) {
        int[]array = new int[100000];
        for(int i = 0; i< array.length;i++){
            array[i] = (int)(Math.random()*100000);
        }
        StopWatch stopwatch = new StopWatch();
        stopwatch.start();
        selectionSort(array);
        stopwatch.stop();
        System.out.println("Elasped time:"+stopwatch.getElapsedTime()+" milliseconds");



    }

    public static void selectionSort(int[] array){
      for(int i = 0; i< array.length;i++){
          int minIndex = i;
          for(int j = i+1;j< array.length;j++){
              if(array[j]<array[minIndex]){
                  minIndex = j;
              }
          }
          int temp = array[minIndex];
          array[minIndex] = array[i];
          array[i] = temp;
      }


    }

}