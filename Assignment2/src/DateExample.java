import java.util.GregorianCalendar;

public class DateExample {
    public static void main(String[] args) {
        // Create a GregorianCalendar instance for the current date
        GregorianCalendar calendar = new GregorianCalendar();

        // Display the current year, month, and day
        int year = calendar.get(GregorianCalendar.YEAR);
        int month = calendar.get(GregorianCalendar.MONTH) + 1; // Adding 1 because months are 0-indexed
        int day = calendar.get(GregorianCalendar.DAY_OF_MONTH);
        System.out.println("Current Date:");
        System.out.println("Year: " + year);
        System.out.println("Month: " + month);
        System.out.println("Day: " + day);
  
        // Set the time in milliseconds since January 1, 1970
        long timeInMillis = 1234567898765L;
        calendar.setTimeInMillis(timeInMillis);

        // Display the year, month, and day for the set time
        year = calendar.get(GregorianCalendar.YEAR);
        month = calendar.get(GregorianCalendar.MONTH) + 1; // Adding 1 again
        day = calendar.get(GregorianCalendar.DAY_OF_MONTH);
        System.out.println("Date after setting time in milliseconds:");
        System.out.println("Year: " + year);
        System.out.println("Month: " + month);
        System.out.println("Day: " + day);
    }
}
