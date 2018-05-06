package com.pattern;

public class Originator {
	private String status;
	
	public Momento createMomento() {
		return new Momento(status);
	}
	
	public void restoreStatus(Momento momento) {
		this.status = momento.getStatus();
	}
	
	public Originator(String status) {
		super();
		this.status = status;
	}
	
	public void printStatus() {
		System.out.println(status);
	}
	
	public void updateStatus(String status) {
		this.status = status;
	}
}
