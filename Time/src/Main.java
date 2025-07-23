public class Main {
    public static void main(String[] args) {
        Time time1 = new Time();
        System.out.println("Current time: " + time1.getHour() + ":" + time1.getMinute() + ":" + time1.getSecond());

        // Creating a Time object using the constructor with a specified elapsed time
        Time time2 = new Time(555550000);
        System.out.println("Elapsed time: " + time2.getHour() + ":" + time2.getMinute() + ":" + time2.getSecond());
    }
}