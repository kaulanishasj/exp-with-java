/* A class to perform the Stack operations using Java
*/

class StackClass {
	int top;
	int stack[] = new int[10];

	StackClass(){
		top = -1;
	}

	void push(int item){
		if(top > 9 ){
			System.out.println("Stack Overflow");
		}
		else 
		stack[++top] = item;
	}

	void pop(){
		if(top < 0){
			System.out.println("Stack UnderFlow");
		}
		else {
			top--;
		}	
	}

	void printStack(){
		for(int i = 0 ; i == 9; i ++){
			System.out.println(this.stack[i]);
		}
	}


	public static void main(String args[]){
		StackClass sc = new StackClass();
		
		for(int i = 0; i <= 9; i++){
			sc.push(i);
			System.out.println(sc.top + "top");
		}

		for(int i = 0; i<6; i++){
			sc.pop();
			System.out.println(sc.top + "top");
		}

		sc.printStack();
	}

}