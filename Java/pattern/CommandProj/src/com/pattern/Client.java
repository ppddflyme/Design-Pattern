package com.pattern;

import java.rmi.activation.ActivationGroupDesc.CommandEnvironment;

import javax.xml.ws.spi.Invoker;

public class Client {

	public static void main(String[] args) {
		MyReceiver receiver = new MyReceiver();
		ICommand command = new ConcreteCommand(receiver);
		MyInvoker invoker = new MyInvoker(command);
		invoker.run();
	}

}
