
frollmean <- function(x, k, fill = NULL, align = c("left", "center", "right")) {
  ## Calculate the rolling mean in C++
  rx <- rollmean_cpp(x, k)
  
  ## Pad with values to original vector length
  if(!is.null(fill)) {
    rx <- value_pad(rx, k, fill, align)
  }
  return(rx)
}

frollsum <- function(x, k, fill = NULL, align = c("left", "center", "right")) {
  rx <- rollsum_cpp(x, k)
  
  if(!is.null(fill)) {
    rx <- value_pad(rx, k, fill, align)
  }
  return(rx)
}

frollmax <- function(x, k, fill = NULL, align = c("left", "center", "right")) {
  rx <- rollmax_cpp(x, k)
  
  if(!is.null(fill)) {
    rx <- value_pad(rx, k, fill, align)
  }
  return(rx)
}

