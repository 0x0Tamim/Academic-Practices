public class Main {
    public static void main(String[] args) {
        CustomStack stack = new CustomStack();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        System.out.println("Top element is "+stack.peek());
        System.out.println("Stack size is "+stack.size());
        stack.pop();
        stack.pop();
        System.out.println("Now stack size is "+stack.size());
        stack.pop();
        stack.pop();

    }
}