package com.pattern;

public class Constant implements Expression {

	private boolean data;
	@Override
	public boolean interpret() {
		// TODO Auto-generated method stub
		return data;
	}
	
	public Constant(boolean data) {
		super();
		this.data = data;
	}

}
