package com.the_ica.poc.jna;

import com.sun.jna.*;

import java.util.*;

public class ResultDetails extends Structure {
  public String warnings;
  public String details;

  public List<String> getFieldOrder() {
    return Arrays.asList("warnings", "details");
  }

  public String toString() {
    return "ResultDetails(" + warnings + ", " + details + ")";
  }
}