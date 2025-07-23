import java.util.GregorianCalendar;

public class GregorianCalender {
    public static void main(String[] args) {
        GregorianCalendar calendar = new GregorianCalendar();
        System.out.println("Current date: ");
        System.out.println("Year:" + calendar.get(GregorianCalendar.YEAR) + " Month:" + (calendar.get(GregorianCalendar.MONTH) + 1) + " Day:" + calendar.get(GregorianCalendar.DAY_OF_MONTH));

        calendar.setTimeInMillis(1234567898765L);
        System.out.println("Year:" + calendar.get(GregorianCalendar.YEAR) + " Month:" + calendar.get(GregorianCalendar.MONTH) + 1 + " Day:" + calendar.get(GregorianCalendar.DAY_OF_MONTH));
    }
}
