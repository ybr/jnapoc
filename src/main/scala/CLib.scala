package com.the_ica.poc.jna

import com.sun.jna._

trait CLib extends Library {
  def printUser(user: TUser, zeros: Array[Double], zero_size: Int): TResult
}