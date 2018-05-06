package com.pattern;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

public class PandaToClone implements Cloneable, Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -1876565584899297493L;
	private int height, weight; 
	public PandaToClone(int height, int weight) {
		super();
		this.height = height;
		this.weight = weight;
	}

	public int getHeight() {
		return height;
	}

	public void setHeight(int height) {
		this.height = height;
	}

	public int getWeight() {
		return weight;
	}

	public void setWeight(int weight) {
		this.weight = weight;
	}

	@Override
	protected Object clone() throws CloneNotSupportedException {
		return new PandaToClone(getHeight(), getWeight());
	}
	
	public Object deepClone() throws IOException, ClassNotFoundException {
		ByteArrayOutputStream bo = new ByteArrayOutputStream();
		ObjectOutputStream oo = new ObjectOutputStream(bo);
		oo.writeObject(this);
		ByteArrayInputStream bi = new ByteArrayInputStream(bo.toByteArray());
		ObjectInputStream oi = new ObjectInputStream(bi);
		return (oi.readObject());
	}

	public static void main(String[] args) throws CloneNotSupportedException, ClassNotFoundException, IOException {
		PandaToClone thisClass = new PandaToClone(1, 2);
		PandaToClone thatClass = (PandaToClone)thisClass.clone();
		PandaToClone thatClassDeep = (PandaToClone)thisClass.deepClone();
		System.out.format("height = %d, weight = %d\n", thatClass.getHeight(), thatClass.getWeight());
		if (thisClass == thatClass)
			System.out.println("thisClass == thatClass");
		else
			System.out.println("thisClass != thatClass");
		
		if (thisClass.getClass() == thatClass.getClass())
			System.out.println("thisClass.getClass() == thatClass.getClass()");
		else
			System.out.println("thisClass.getClass() != thatClass.getClass()");
		
		System.out.format("height = %d, weight = %d\n", thatClassDeep.getHeight(), thatClassDeep.getWeight());
		if (thisClass == thatClassDeep)
			System.out.println("thisClass == thatClassDeep");
		else
			System.out.println("thisClass != thatClassDeep");
		
		if (thisClass.getClass() == thatClassDeep.getClass())
			System.out.println("thisClass.getClass() == thatClassDeep.getClass()");
		else
			System.out.println("thisClass.getClass() != thatClassDeep.getClass()");
		
	}

}
