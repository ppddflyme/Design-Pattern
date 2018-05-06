package com.pattern;

public class Client {

	public static void main(String[] args) {
		Aggregation  agg = new ConcreteAggregation();
		MyObject ob1 = new MyObject();
		MyObject ob2 = new MyObject();
		agg.addObject(ob1);
		agg.addObject(ob2);
		
		MyIterator it = agg.getIterator();
		
		for (it.first(); !it.isDone(); it.next()) {
			it.getCurrentElement().sayHi();
		}

	}

}
