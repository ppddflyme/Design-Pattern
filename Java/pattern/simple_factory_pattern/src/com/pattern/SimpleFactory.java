package com.pattern;

public class SimpleFactory {
	static IFruit createFruit(String fruitName) throws BadFruitException {
		if (fruitName.equalsIgnoreCase("apple"))
			return new Apple();
		else if (fruitName.equalsIgnoreCase("banana"))
			return new Banana();
		else
			throw new BadFruitException("Bad fruit");
	}
}
