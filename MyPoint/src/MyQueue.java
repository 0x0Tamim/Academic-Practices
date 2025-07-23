class Queue{
    int[] elements;
    int size;
    Queue(){
        elements=new int[8];
        size=0;
    }
    public  void enqueue(int v){
        if(size>=elements.length){
            int[] temp=new int[elements.length*2];
            for(int j=0;j< elements.length;j++){
                temp[j]=elements[j];
            }
            elements=temp;
        }
        elements[size++]=v;
    }
    public boolean empty(){
        boolean result=false;
        if(size==0)
            result=true;
        return result;
    }
    public    int dequeue(){
        int front=elements[0];
        for(int i=0;i<size;i++){
            elements[i]=elements[i+1];
        }
        size--;
        return front;
    }
    public int getSize(){
        return size;
    }
}
public class MyQueue {
    public static void main(String[] args) {
        Queue queue=new Queue();
        for(int i=1;i<=20;i++){
            queue.enqueue(i);
        }
        while(!queue.empty()){
            System.out.printf(" %d ",queue.dequeue());
        }
    }
}