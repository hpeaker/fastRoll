value_pad <- function(x, k, value = NA, align = c("left", "center", "right")) {
  align <- align[1]
  if(align == "center") {
    padding_left <- rep(value, floor((k-1)/2))
    padding_right <- rep(value, ceiling((k-1)/2))
    return(c(padding_left, x, padding_right))
  }
  if(align == "left") {
    padding <- rep(value, k - 1)
    return(c(x, padding))
  }
  if(align == "right") {
    padding <- rep(value, k - 1)
    return(c(padding, x))
  }
}