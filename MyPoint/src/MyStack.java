import java.util.Scanner;

class MyStack {
    private int[] element;
    private int size;
    private static final int DEFAULT_CAPACITY = 16;

    public MyStack() {
        element = new int[DEFAULT_CAPACITY];
    }

    public void push(int factor) {
        if (size >= element.length) {
            int[] temp = new int[element.length * 2];
            System.arraycopy(element, 0, temp, 0, element.length);
            element = temp;
        }
        element[size++] = factor;
    }

    public int pop() {
        return element[--size];
    }

    public boolean isEmpty() {
        return size == 0;
    }
}

    class Stack {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int integer;
        do {
            System.out.print("Enter a positive integer: ");
            integer = input.nextInt();
            if (integer == 1) {
                System.out.println("1 has no prime factors");
                return;
            }
        } while (integer <= 0);

        MyStack stack = new MyStack();
        int i = 2;
        while (integer > 1) {
            if (integer % i == 0) {
                stack.push(i);
                integer = integer / i;
            } else
                i++;
        }
        System.out.println("Smallest factor in decreasing order:  ");
        while (!stack.isEmpty()) {
            System.out.print(stack.pop() + " ");
        }
    }
}