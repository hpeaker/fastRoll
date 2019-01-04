

# To benchmark
library(microbenchmark)
library(rbenchmark)

# New package
library(fastRoll)

# Other packages with rolling stats
library(zoo)
library(RcppRoll)
library(roll)
library(RollingWindow)

x <- 1:1000
y <- rnorm(1000)


microbenchmark(
  rollmax_cpp(x, 100),
  zoo::rollmax(x, 100),
  RcppRoll::roll_max(x, 100),
  RollingWindow::RollingMax(x, 100)
)

microbenchmark(
  rollmax_cpp(y, 100),
  zoo::rollmax(y, 100),
  RcppRoll::roll_max(y, 100),
  RollingWindow::RollingMax(y, 100)
)






