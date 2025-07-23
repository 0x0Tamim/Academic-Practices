import java.util.GregorianCalendar;

public class Calendar {
    public static void main(String[] args) {
        // Task 1: Display the current year, month, and day
        GregorianCalendar calendar = new GregorianCalendar();

        int currentYear = calendar.get(GregorianCalendar.YEAR);
        int currentMonth = calendar.get(GregorianCalendar.MONTH) + 1; // Months are 0-indexed, so we add 1
        int currentDay = calendar.get(GregorianCalendar.DAY_OF_MONTH);

        System.out.println("Current Date:");
        System.out.println("Year: " + currentYear);
        System.out.println("Month: " + currentMonth);
        System.out.println("Day: " + currentDay);

        // Task 2: Set time to 1234567898765 milliseconds since January 1, 1970 and display the date
        long timeInMillis = 1234567898765L;
        calendar.setTimeInMillis(timeInMillis);

        int specificYear = calendar.get(GregorianCalendar.YEAR);
        int specificMonth = calendar.get(GregorianCalendar.MONTH) + 1; // Months are 0-indexed, so we add 1
        int specificDay = calendar.get(GregorianCalendar.DAY_OF_MONTH);

        System.out.println("Date after setting time in milliseconds:");
        System.out.println("Year: " + specificYear);
        System.out.println("Month: " + specificMonth);
        System.out.println("Day: " + specificDay);
    }
}

