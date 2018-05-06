package com.pattern;

import java.util.ArrayList;

public class ConcreteSubject implements Subject {
	private ArrayList<Observer> collect = new ArrayList<Observer>();
	
	public void addObserver(Observer ob) {
		if (!collect.contains(ob))
			collect.add(ob);
	}
	
	public void deleteObserver(Observer ob) {
		if (collect.contains(ob))
			collect.remove(ob);
	}

	@Override
	public void nofityAll(String msg) {
		int collectSize = collect.size();
		for (int i = 0; i < collectSize; ++i)
			collect.get(i).update(msg);
	}

}
