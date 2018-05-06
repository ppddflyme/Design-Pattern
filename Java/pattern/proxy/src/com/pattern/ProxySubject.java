package com.pattern;

public class ProxySubject implements Subject {
	private RealSubject realSubject;

	public ProxySubject() {
		realSubject = new RealSubject();
	}

	@Override
	public void request() {
		preRequest();
		realSubject.request();
		postRequest();
	}

	private void postRequest() {
		System.out.println("ProxySubject.postRequest()");
		
	}

	private void preRequest() {
		System.out.println("ProxySubject.preRequest()");
		
	}

}
