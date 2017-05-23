package com.the_ica.poc.jna;

import com.sun.jna.*;

import java.util.*;

public class TUser extends Structure {
  public String name;
  public int age;
  public TAddress address;

  public TUser() {
    this(null, 0, null);
  }

  public TUser(String name, int age, TAddress address) {
    this.name = name;
    this.age = age;
    this.address = address;
  }

  public List<String> getFieldOrder() {
    return Arrays.asList("name", "age", "address");
  }
}