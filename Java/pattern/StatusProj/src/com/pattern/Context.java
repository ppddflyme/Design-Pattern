package com.pattern;

public class Context {
	private Status status;
	
	public Context(Status status) {
		super();
		this.status = status;
	}
	
	public void showStatus() {
		status.displayStatus();
	}
	
	public void changeStatus(Status status) {
		this.status = status;
	}

}
