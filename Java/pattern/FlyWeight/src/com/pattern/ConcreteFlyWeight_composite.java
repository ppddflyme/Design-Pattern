package com.pattern;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;

import org.omg.CosNaming.NamingContextExtPackage.AddressHelper;

public class ConcreteFlyWeight_composite extends FlyWeight_root {

	private HashMap<Character, FlyWeight_root> collect;
	
	public ConcreteFlyWeight_composite() {
		super();
		collect = new HashMap<Character, FlyWeight_root>(10);
	}
	
	public void add(Character state, FlyWeight_root fly) {
		collect.put(state, fly);
	}
	
	@Override
	void operation(String externalState) {
		FlyWeight_root fly = null;
		for (Iterator<Entry<Character, FlyWeight_root>> it = collect.entrySet().iterator();
				it.hasNext();) {
			Map.Entry<Character, FlyWeight_root> e = (Map.Entry<Character, FlyWeight_root>)it.next();
			fly = (FlyWeight_root)e.getValue();
			fly.operation(externalState);
			
		}

	}

}
