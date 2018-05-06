package com.pattern;

public class And implements Expression {
	private Expression left, right;

	@Override
	public boolean interpret() {
		// TODO Auto-generated method stub
		//if (left instanceof And) {}
		return left.interpret() && right.interpret();
	}
	
	public And(Expression left, Expression right) {
		super();
		this.left = left;
		this.right = right;
	}

}
