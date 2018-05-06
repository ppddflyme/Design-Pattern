package com.pattern;

public class Main {

	public static void main(String[] args) {
		ICreator c1 = new CreatorA();
		c1.createProductA();
		c1.createProduct2A();
		ICreator c2 = new CreatorB();
		c2.createProductA();
		c2.createProduct2A();		

	}

}
