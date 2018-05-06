package com.pattern;

import java.util.HashMap;

public class RegSingleton {
	static private HashMap<String, RegSingleton> m_registry = new HashMap<String, RegSingleton>();
	
	static {
		RegSingleton instance = new RegSingleton();
		m_registry.put(instance.getClass().getName(), instance);
	}
	
	protected RegSingleton() {}
	
	static RegSingleton getInstance(String name) {
		if (name == null) 
			name = "com.pattern.RegSingleton";
		if(m_registry.get(name) == null) {
			try {
				m_registry.put(name, (RegSingleton)Class.forName(name).newInstance());
			} catch (Exception e) {
				System.out.println(e.toString());
			}
		}
		return m_registry.get(name);
	}
	
	public void sayHi() {
		System.out.println("RegSingleton.sayHi()");
	}
	
	

}
