package com.the_ica.poc.jna;

import com.sun.jna.*;

import java.util.*;

public class TResult extends Structure {
  public int code;
  public String message;
  public ResultDetails details;

  public List<String> getFieldOrder() {
    return Arrays.asList("code", "message", "details");
  }

  public String toString() {
    return "TResult(" + code + ", " + message + ", " + details + ")";
  }
}