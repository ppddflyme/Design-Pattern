package com.pattern;

public class ConcreteAggregation extends Aggregation {

	@Override
	public MyIterator getIterator() {
		// TODO Auto-generated method stub
		return new ConcreteIterator(this);
	}

}
