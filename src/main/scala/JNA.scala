package com.the_ica.poc.jna

import com.sun.jna._

object JNA {
  def main(args: Array[String]): Unit = {
    val lib = Native.loadLibrary("/home/ybr/gitlab/jna/libhello.so", classOf[CLib]).asInstanceOf[CLib]

    val user = new TUser(
      "ybr",
      36,
      new TAddress(
        "4 rue Camille Claudel",
        null,
        92110,
        "Clichy",
        "France"
    ))

    println(lib.printUser(user, Array(0.123, 0.124), 2))
  }
}