public class Vehicle {
    public static void main(String[] args) {
        Vehicle Car = new Vehicle();
        Car.start();
        Car.start(true);
        Car.start(false);
    }

    public void start() {
        System.out.println("Starting the vehicle.");
    }
    public void start(boolean remote) {
        if (remote) {
            System.out.println("Starting the vehicle remotely.");
        } else {
            System.out.println("Starting the vehicle manually.");
        }
    }


}
