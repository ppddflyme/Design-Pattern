package com.pattern;

public class Decorator implements IComponent {

	private IComponent m_component;
	
	public Decorator(IComponent m_component) {
		super();
		this.m_component = m_component;
	}

	@Override
	public void showName() {
		m_component.showName();
	}

}
