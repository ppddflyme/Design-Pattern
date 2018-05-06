package com.pattern;

public class RefinedAbstraction extends Abstraction {

	public RefinedAbstraction(Implementor imp) {
		super(imp);
		// TODO Auto-generated constructor stub
	}
	
	public void operation() {
		System.out.println("RefinedAbstraction.operation()");
		super.operation();
	}

}
