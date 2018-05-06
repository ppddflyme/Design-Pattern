package com.pattern;

public class CareTaker {
	private Momento momento;
	
	public void saveMomento(Momento momento) {
		this.momento = momento;
	}
	
	public Momento returnMomento() {
		return momento;
	}
	
	public CareTaker(Momento momento) {
		this.momento = momento;
	}

}
