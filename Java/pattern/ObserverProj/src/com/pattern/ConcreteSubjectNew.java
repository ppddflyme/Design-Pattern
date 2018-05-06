package com.pattern;

public class ConcreteSubjectNew extends SubjectNew {
	public void changeState(String msg) {
		this.notifyAll(msg);
	}
}
