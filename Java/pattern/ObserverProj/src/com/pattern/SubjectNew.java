package com.pattern;

import java.util.ArrayList;

public class SubjectNew {
	private ArrayList<Observer> collect = new ArrayList<Observer>();
	
	public void addObserver(Observer ob) {
		if (!collect.contains(ob)) {
			collect.add(ob);
		}
	}
	
	public void deleteObServer(Observer ob) {
		if (collect.contains(ob))
			collect.remove(ob);
	}
	
	public void notifyAll(String msg) {
		int arrayLen = collect.size();
		for (int i = 0; i < arrayLen; ++i) {
			collect.get(i).update(msg);
		}
	}
	
}
