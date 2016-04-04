package stack;

public class StackClass {
	
	private Node first=null;
	
	private class Node{
		String item;
		Node next;
	}

	public boolean isEmpty() {
		return first==null;
	}
	public void push(String item){
		Node oldfirst=first;
		first=new Node();
		first.item=item;
		first.next=oldfirst;
	}
	public String pop() {
		String item=first.item;
		first=first.next;
		return item;
	}
	//打印栈中个节点内容
	public void showNodes(){
		Node tmp=new Node();
		tmp=first;
		System.out.println('\n');
		while(tmp!=null){
			System.out.println("*"+tmp.item);
			tmp=tmp.next;
		}
	}
	//构造函数
	public StackClass(String item) {
		String[] words = item.split(" ");
		for(int i=0;i<words.length;i++){
			if (!words[i].equals("-")) {
				push(words[i]);	
			}
			else {
				System.out.println(pop());
			}
		}
		
	}
	//main函数
	public static void main(String[] args) {
		String line="to be or not - to - - - - be";
		StackClass s = new StackClass(line);
		s.showNodes();
	}
}