package com.pattern;

public class ConcreteFlyWeight_leaf extends FlyWeight_root {
	private Character internalState;
	public ConcreteFlyWeight_leaf(Character internalState) {
		super();
		this.internalState = internalState;
	}
	@Override
	void operation(String externalState) {
		System.out.println("internale state: " + internalState + ", external state:" + externalState);

	}
}
