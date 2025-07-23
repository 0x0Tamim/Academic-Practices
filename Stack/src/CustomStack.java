import java.util.ArrayList;
public class CustomStack {
    private ArrayList<Integer> stack = new ArrayList<>();
    public CustomStack(){
        stack = new ArrayList<>();
    }
    public void push(int element){
        stack.add(element);
        System.out.println("Pushed "+element+" onto the stack");
    }
    public int pop(){
        if(stack.isEmpty()){
            System.out.println("Stack uderflow:Unable to remove element,the stack is empty");
            return -1;
        }
        else{
            int removedElement = stack.remove(stack.size()-1);
            System.out.println("Popped "+removedElement+" from the stack");
            return removedElement;
        }
    }
    public int peek() {
        if (stack.isEmpty()) {
            System.out.println("Stack is empty");
            return -1;
        } else {
            return stack.get(stack.size() - 1);
        }
    }
    public int size(){
        return stack.size();
    }
    public boolean isEmpty(){
        return stack.isEmpty();
    }

}
