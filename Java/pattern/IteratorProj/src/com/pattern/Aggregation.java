package com.pattern;

import java.util.ArrayList;

public abstract class Aggregation {
	private ArrayList<MyObject> collect = new ArrayList<MyObject>(5);
	private int size = 0;
	
	public void addObject(MyObject ob) {
		if (!collect.contains(ob)) {
			collect.add(ob);
			++size;
		}
	}
	
	public void removeObject(MyObject ob) {
		if (collect.contains(ob)) {
			collect.remove(ob);
			--size;
		}
	}
	
	public MyObject getElement(int idx) {
		return collect.get(idx);
	}
	
	abstract public MyIterator getIterator();

	public int getSize() {
		// TODO Auto-generated method stub
		return size;
	}
	
}
