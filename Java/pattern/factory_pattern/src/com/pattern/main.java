package com.pattern;

import java.awt.List;

public class main {

	public static void main(String[] args) {
		Creator factory1 = new ConcreteCreator1();
		Product p1 = factory1.factory();
		Creator factory2 = new ConcreteCreator2();
		Product p2 = factory2.factory();
	}

}
