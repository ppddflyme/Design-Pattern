package com.pattern;

import java.util.ArrayList;

public class Composite_safety extends IComponent_safety {

	private ArrayList<IComponent_safety> myCollection = new ArrayList<IComponent_safety>();

	public void addChild(IComponent_safety child) {
		myCollection.add(child);
	}

	public void deleteChild(IComponent_safety child) {
		if (myCollection.contains(child))
			myCollection.remove(child);
	}

	public void loopChild() {
		int collectionSize = myCollection.size();
		for (int i = 0; i < collectionSize; ++i) {
			myCollection.get(i).displayClassName();
			if (myCollection.get(i) instanceof com.pattern.Composite_safety) {
				((Composite_safety)(myCollection.get(i))).loopChild();
			}
		}

	}

	@Override
	public void displayClassName() {
		Class<?> enclosingClass = getClass().getEnclosingClass();
		if (enclosingClass != null) {
		  System.out.println(enclosingClass.getName());
		} else {
		  System.out.println(getClass().getName());
		}
	}
}
