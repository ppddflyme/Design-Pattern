package com.pattern;

public class Main {

	public static void main(String[] args) {
		try {
			IFruit fruit = SimpleFactory.createFruit("apple");
			fruit.printFruitName();
			IFruit fruit2 = SimpleFactory.createFruit("banana");
			fruit2.printFruitName();
			IFruit fruit3 = SimpleFactory.createFruit("banana2");
			fruit3.printFruitName();
			
		}
		catch (BadFruitException e) {
			e.printStackTrace();
		}

	}

}
