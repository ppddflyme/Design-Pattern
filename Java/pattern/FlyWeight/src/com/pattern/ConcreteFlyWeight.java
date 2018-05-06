package com.pattern;

public class ConcreteFlyWeight extends FlyWeight{
	private Character internalState;
	
	public ConcreteFlyWeight(Character internalState) {
		super();
		this.internalState = internalState;
	}

	@Override
	void operation(String externalState) {
		System.out.println("internalState: " + internalState + ", externalState: " + externalState);
		
	}

}
