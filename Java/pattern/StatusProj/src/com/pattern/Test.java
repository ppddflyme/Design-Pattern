package com.pattern;

public class Test {

	public static void main(String[] args) {
		Status status1 = new Status("Hello");
		Status status2 = new Status("World");
		Context context = new Context(status1);
		context.showStatus();
		context.changeStatus(status2);
		context.showStatus();
	}

}
