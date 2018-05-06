package com.pattern;

public class Test {

	public static void main(String[] args) {
		Originator originator = new Originator("Hello World");
		CareTaker careTaker = new CareTaker(originator.createMomento());
		originator.printStatus();
		originator.updateStatus("hahah");
		originator.printStatus();
		originator.restoreStatus(careTaker.returnMomento());
		originator.printStatus();

	}

}
