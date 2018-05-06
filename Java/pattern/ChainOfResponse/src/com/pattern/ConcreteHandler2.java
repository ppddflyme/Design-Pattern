package com.pattern;

public class ConcreteHandler2 extends Handler {

	@Override
	public void handler() {
		if (getSuccessor() != null)
			getSuccessor().handler();
		else
			System.out.println("ConcreteHandler2::handler");

	}

}
