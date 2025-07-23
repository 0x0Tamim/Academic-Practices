import java.util.Calendar;
public class Time {
    private int hour;
    private int minute;
    private int second;
    public Time() {
        Calendar calendar = Calendar.getInstance();

            this.hour = calendar.get(Calendar.HOUR_OF_DAY);
            this.minute = calendar.get(Calendar.MINUTE);
            this.second = calendar.get(Calendar.SECOND);

    }

      public Time(long elapsedTime){
           setTime(elapsedTime);

        }
        public Time(int hour,int minute,int second){
            this.hour = hour;
            this.minute = minute;
            this.second = second;
        }
        public int getHour(){
            return hour;
        }
        public int getMinute(){
            return minute;
        }
        public int getSecond(){
            return second;
        }


    public void setTime(long elaspedTime){
        long totalSeconds = elaspedTime/1000;
        this.second = (int)(totalSeconds % 60);

        long totalMinutes = totalSeconds/60;
        this.minute = (int)(totalMinutes % 60);

        long totalHours = totalMinutes / 60;
        this.hour = (int)(totalHours % 24);


    }
}
