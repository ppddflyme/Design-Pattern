package com.pattern;

public class MyIterator {
	private int index = 0;
	private Aggregation agg;
	private int size = 0;
	
	public MyIterator(Aggregation agg) {
		this.agg = agg;
		this.size = agg.getSize();
	}
	
	public void first() {
		index = 0;
	}
	
	public void next() {
		++index;
	}
	
	public boolean isDone() {
		if (index <= size -1 )
			return false;
		else
			return true;
	}
	
	public MyObject getCurrentElement() {
		return agg.getElement(index);
	}

}
