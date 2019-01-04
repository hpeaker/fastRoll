
library(microbenchmark)
library(fastRoll)

x <- 1:10000

microbenchmark(
  value_pad(x, k = 10, NA, "right"),
  value_pad_cpp(x, 10, 0, NA)
)

