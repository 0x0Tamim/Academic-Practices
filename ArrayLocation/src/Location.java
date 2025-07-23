public class Location {
    int row;
    int column;
    double maxValue;
    Location(){

    }
    Location(int row, int column, double maxValue){
        this.row = row;
        this.column = column;
        this.maxValue = maxValue;
    }
    public static Location locateLargest(double[][]array){
        Location location = new Location();
        location.maxValue = array[0][0];
        location.row = 0;
        location.column = 0;
        for(int i = 0;i< array.length;i++){
            for(int j = 0;j<array[i].length;j++ ){
                if(location.maxValue<array[i][j]){
                    location.maxValue = array[i][j];
                    location.row = i;
                    location.column = j;
                }
            }
        }
        return location;
    }

}
