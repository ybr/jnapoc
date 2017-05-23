package com.the_ica.poc.jna;

import com.sun.jna.*;

import java.util.*;

public class TAddress extends Structure {
  public String line1;
  public String line2;
  public int zip;
  public String city;
  public String country;

  public TAddress() {
    this(null, null, 0, null, null);
  }

  public TAddress(String line1, String line2, int zip, String city, String country) {
    this.line1 = line1;
    this.line2 = line2;
    this.zip = zip;
    this.city = city;
    this.country = country;
  }

  public List<String> getFieldOrder() {
    return Arrays.asList("line1", "line2", "zip", "city", "country");
  }
}