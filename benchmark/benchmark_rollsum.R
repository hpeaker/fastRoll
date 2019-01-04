

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
  frollsum(x, 100, fill = NA),
  zoo::rollsum(x, 100),
  RcppRoll::roll_sum(x, 100),
  roll::roll_sum(matrix(x, ncol = 1), 100),
  RollingWindow::RollingSum(x, 100)
)

microbenchmark(
  frollsum(y, 100),
  zoo::rollsum(y, 100),
  RcppRoll::roll_sum(y, 100),
  roll::roll_sum(matrix(y, ncol = 1), 100),
  RollingWindow::RollingSum(y, 100)
)






