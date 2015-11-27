class OuterClass{
	
	int i;
	 void displayContent(){
		for(int j = 0; j <= 10; j++){
			class InnerClass{
				static final int inner_count = 0;
			}		
			InnerClass inner_obj = new InnerClass();
		
			System.out.println("new inner object # " + InnerClass.inner_count);
		}
	}
	public static void main(String args[]){
		OuterClass outer = new OuterClass();
		outer.displayContent();
	}



}
