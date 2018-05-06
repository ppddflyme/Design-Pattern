package com.pattern;

public class Customer {

	public static void main(String[] args) {
		//IProduct myProduct1 = new Product1();
		//IBuilder myBuilder1 = new Builder1(myProduct1);
		Director myDirector1 = new Director(new Builder1(new Product1()));
		myDirector1.create();
		Director myDirector2 = new Director(new Builder1(new Product2()));
		myDirector2.create();

	}

}
