package stack;

public class QueueClass {
	private Node first,last;
	
	private class Node {
		String item;
		Node next;
	}
	
	public boolean isEmpty(){
		return first==null;
	}
	public void enqueue(String word) {
		Node oldlast=last;
		last = new Node();
		last.item=word;
		last.next=null;
		if(isEmpty()) first=last;
		else 	oldlast.next=last;
	}
	public void dequeue() {
		Node tmp=first;
		first=first.next;
		System.out.println(tmp.item);
	}
	
//	打印队列中个节点内容
	public void showNodes(){
		Node tmp=new Node();
		tmp=first;
		System.out.println('\n');
		while(tmp!=null){
			System.out.println("*"+tmp.item);
			tmp=tmp.next;
		}
	}
	public QueueClass(String line) {
		String[] words=line.split(" ");
		for(int i=0;i<words.length;i++){
			if(!words[i].equals("-")){
				enqueue(words[i]);
			}
			else {
				dequeue();
			}
		}
	}

	public static void main(String[] args) {
		String line="to be or not - to - - - - be";
		QueueClass s = new QueueClass(line);
		s.showNodes();
	}
}
