package com.pattern;

public abstract class Handler {
	private Handler successor;

	public Handler getSuccessor() {
		return successor;
	}

	public void setSuccessor(Handler successor) {
		this.successor = successor;
	}
	
	abstract public void handler();

}
