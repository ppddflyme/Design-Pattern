package com.pattern;

public abstract class Abstraction {
	private Implementor imp;
	public void operation() {
		imp.operationImp();
	}
	public Abstraction(Implementor imp) {
		super();
		this.imp = imp;
	}
}
