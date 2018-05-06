package com.pattern;

import java.util.ArrayList;

public class Composite_trans implements IComponent_trans {
	private ArrayList<IComponent_trans> myCollection = new ArrayList<IComponent_trans>();

	@Override
	public void addChild(IComponent_trans child) {
		myCollection.add(child);
	}

	@Override
	public void deleteChild(IComponent_trans child) {
		if (myCollection.contains(child))
			myCollection.remove(child);
	}

	@Override
	public void loopChild() {
		int collectionSize = myCollection.size();
		for (int i = 0; i < collectionSize; ++i) {
			myCollection.get(i).displayClassName();
			if (myCollection.get(i) instanceof com.pattern.Composite_trans) {
				myCollection.get(i).loopChild();
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
