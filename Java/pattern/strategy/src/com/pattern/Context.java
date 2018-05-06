package com.pattern;

public class Context {

	private Stragety strategy;

	public Context(Stragety strategy) {
		super();
		this.strategy = strategy;
	}
	
	public void operation() {
		strategy.operation();
	}
}
