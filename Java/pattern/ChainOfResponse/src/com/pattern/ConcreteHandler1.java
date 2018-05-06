package com.pattern;

public class ConcreteHandler1 extends Handler {

	@Override
	public void handler() {
		if (getSuccessor() != null)
			getSuccessor().handler();
		else
			System.out.println("ConcreteHandler1::handler");

	}

}
